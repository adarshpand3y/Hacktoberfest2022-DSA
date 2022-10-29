class Solution
{
public:
    int findNumberOfLIS(vector<int> &a)
    {
        int n = a.size(), mx = 1, res = 0;
        vector<int> dp(n, 1), count(n, 1);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    }
                    else if (dp[i] == dp[j] + 1)
                    {
                        count[i] += count[j];
                    }
                }
            }
            mx = max(mx, dp[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (mx == dp[i])
                res += count[i];
        }
        return res;
    }
};
// contributed by @SohamPatra