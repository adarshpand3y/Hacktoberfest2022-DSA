#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    int k = INT_MAX;
 
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<k)
           k=arr[i];
    }
 
    return k;
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The smallest element in the array is: "<<sortArr(arr2);
   
    return 0;
}
