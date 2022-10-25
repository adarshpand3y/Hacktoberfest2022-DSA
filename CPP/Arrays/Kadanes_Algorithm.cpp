#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int maxi = INT_MIN, sum = 0;
    if(nums.size() == 1)
        return nums[0];
    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}
