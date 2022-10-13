#include<iostream>
using namespace std;

int calculateMaxSum(vector<int> &nums) {
   int sum=0;
    int maxSum=INT_MIN;
    for(auto x:nums){
        sum+=x;
        maxSum=max(maxSum,sum);
        if(sum<0) sum=0; 
    }
    return maxSum;
}

int main() {
   cout << "Enter size of array:\n";
   int n;
   cin >> n;
   vector<int> nums;
   cout << "Enter array elements:\n ";
   for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        nums.push_back(p);
   }
   cout << "Maximum subarray sum is: "<<calculateMaxSum(nums) << endl;
   return 0;
}