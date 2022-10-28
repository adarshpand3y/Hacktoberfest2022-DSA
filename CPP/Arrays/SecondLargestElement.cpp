#include<iostream>

using namespace std;

int print2largest(int arr[], int n) {
	    int temp1=arr[0];
	    int temp2=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>temp1){
	            temp2 = temp1;
	            temp1 = arr[i];
	            
	        }
	        if(arr[i]<temp1 && arr[i]>temp2){
	            temp2 = arr[i];
	        }
	        
	        
	    }
	    return temp2;
	}

int main(){
    int n;
    cout<<"Enter Number of Elements you want to enter::"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   cout<<"Second Largest Element is:"<<print2largest(arr,n)<<endl;


    return 0;
}