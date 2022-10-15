class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      for(int i =1 ;i < nums.size() ; i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        
        
        return nums;   
    }
};
Footer
© 2022 GitHub, Inc.
