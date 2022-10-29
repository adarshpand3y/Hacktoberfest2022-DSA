constexpr int MOD = 1e9 + 7;

class Solution
{
public:
    vector<int> tree;
    // N is the next biggest 2 power that can hold all leaf nodes
    int n, N;

    void update(int i)
    {
        for (int j = N + v(i); j >= 1; j >>= 1)
        {
            tree[j]++;
        }
    }

    int query(int l, int r)
    {
        // r is not inclusive
        r++;
        int ret = 0;
        // the tree is 1-indexed, so if your 1 bit is set you are the right child (or root)
        // this approach iterates from the leaves up, so O(log(n))
        for (l = N + v(l), r = N + v(r); l < r; l >>= 1, r >>= 1)
        {
            // if the (inclusive) left is on the right side, we take it and jump to our right neighbor
            if (l & 1)
                ret += tree[l++];
            // if the (exclusive) right is on the right side, we take the entire left side
            if (r & 1)
                ret += tree[--r];
        }
        return ret;
    }

    // the index offset by the minimum possible value
    int v(int val)
    {
        return n + val;
    }

    int subarraysWithMoreZerosThanOnes(vector<int> &nums)
    {
        // use segment tree to keep track of range sums from [-N, N]
        // a 0 changes the current cumulative by -1, 1 by +1
        // for each index, we want to know the number of choices where (EVERYTHING UP TO THAT CHOICE, but not including is < US)
        // why: because then the range must include at least one more 1 than 0, in order to have increased
        n = nums.size();
        // make the base a perfect power of 2 that can hold (2*n + 1) values in the leaf layer
        N = 2;
        while (N <= 2 * n)
        {
            N *= 2;
        }
        // tree is 1 indexed, tree leaves start at position N
        tree.resize(2 * N, 0);

        int ret = 0;
        int cum = 0;
        for (auto &val : nums)
        {
            // insert the latest up to current choice, but not including
            update(cum);
            cum += val == 0 ? -1 : 1;
            // now take everything where the interval is positive, i.e. the cumulative is smaller than the current cum
            ret = (ret + query(-n, cum - 1)) % MOD;
        }

        return ret;
    }
};

// contributed by @SohamPatra