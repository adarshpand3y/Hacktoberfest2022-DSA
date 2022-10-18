#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int maxi = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxi)
            maxi = arr[i];
    }
    return maxi;
}

void countingSort(int arr[], int n, int place){
    int output[n+1];
    int count[10] = {0};
    
    for(int i=0; i<n; i++){
        count[(arr[i]/place)%10]++;
    }

    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        output[count[(arr[i]/place)%10] - 1] = arr[i];
        count[(arr[i]/place)%10]--;
    }

    for(int i=0; i<n; i++)
        arr[i] = output[i];
}

void radix_sort(int arr[], int n){
    int max = getMax(arr, n);

    for(int place = 1; max/place >0; place*=10){
        countingSort(arr, n, place);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    radix_sort(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}