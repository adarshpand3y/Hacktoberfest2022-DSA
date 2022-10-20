#include<bits/stdc++.h>
using namespace std;
 
int largest(vector<int>& arr) {
    int max=0;
    for(int j=0;j<arr.end()-arr.begin();j++){
        if(max<arr[j]){
            max=arr[j];
        }

    }
    return max;
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<largest(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<largest(arr2);
   
    return 0;
}
