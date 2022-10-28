#include<stdio.h>
#include<conio.h>

void swapKth(int *arr, int n, int k) {
	    int temp = arr[k-1];
	    arr[k-1] = arr[n-k];
	    arr[n-k] = temp;
	}

int main(){

    int n;
    printf("Enter Number of Elements you want to enter::");
    scanf("%d",&n);
    int k;
    printf("Enter value of k::");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    swapKth(arr,n,k);

    printf("array after swapping is::");

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");


        
    }
    return 0;
}