#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr,int s,int e,int key){
    
    int mid = (s+e)/2;
    //base case
    if(s>e){
        return false;
    }

    if(arr[mid] == key){
        return true;
    }
    
    if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }
    
    else{
        return binarySearch(arr,s , mid-1,key);
    }

}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key = 7;
    int s = 0;
    int e = 4;

    bool ans = binarySearch(arr,s,e,key);

    if(ans){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }
 
    return 0;
}