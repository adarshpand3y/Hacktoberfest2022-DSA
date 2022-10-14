#include <bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) 
{
    //O(nlogn)
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
//Better approach 
//Time-complexity=O(n) Space-complexity=O(1)
int newfunc(vector<int>& arr)
{
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2)<<endl;
    cout<<"The Largest element in the array is: "<<newfunc(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<newfunc(arr2)<<endl;
   
    return 0;
}