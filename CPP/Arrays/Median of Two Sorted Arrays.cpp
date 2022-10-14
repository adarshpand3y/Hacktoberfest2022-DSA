#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merging two sorted array
        int len1=nums1.size(); int len2=nums2.size();
        int k=0,i=0,j=0;
        int merge[len1+len2];
        while(i<len1 && j<len2){
            if(nums1[i]<nums2[j]){
                merge[k++]=nums1[i++];
            }
            else{
                merge[k++]=nums2[j++];
            }
        }
        while(i<len1){
            merge[k++]=nums1[i++];
        }
        while(j<len2){
            merge[k++]=nums2[j++];
        }
        
        //find the length of merge array and find mid index;
        int total=len1+len2;
       
        int mid=total/2;
        
        return total%2 ? merge[mid] : (merge[mid]+merge[mid-1])/2.0; 
    }
};
int main(){
  vector<int> a={1,2};
  vector<int> b={3,4};
  findMedianSortedArrays(a,b);
}
