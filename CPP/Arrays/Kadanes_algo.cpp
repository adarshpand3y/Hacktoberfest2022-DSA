// Kadane's algorithm to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> v, int n)
{
	int max_sum = INT_MIN, curr_sum = 0;

	for (int i = 0; i < n; i++) {
		curr_sum = curr_sum + v[i];
		max_sum= max(max_sum, curr_sum);
		if (curr_sum < 0)curr_sum = 0;
	}
	return max_sum;
}

int main()
{
	vector<int> v = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = v.size();
	int ans = maxSubArraySum(v, n);
	cout << "Maximum contiguous sum is " << ans;
	return 0;
}
