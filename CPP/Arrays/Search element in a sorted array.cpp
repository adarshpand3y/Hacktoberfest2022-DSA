#include <iostream>
using namespace std;
#include <vector>
int search(vector<int>& nums, int target) {
  //OPTIMISED APPROACH
    int lo=0,hi=nums.size()-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(nums[mid]==target)           
            return mid;
        else if(nums[lo]<=nums[mid]){
            //left side is sorted
            if(target>=nums[lo] and target<=nums[mid]){
               hi=mid-1;
            }
            else
               lo=mid+1;
       }
        else{
             //work on right side
             if(target>=nums[mid] and target<=nums[hi])
                lo=mid+1;
             else
                 hi=mid-1;
                
       }
            
     }
     return -1;
}
int main(){
   vector<int> arr={4,5,6,7,0,1,2};
  int target=0;
  cout<<"Target present at "<<search(arr,target)<<" position." <<endl;
  return 0;
}
