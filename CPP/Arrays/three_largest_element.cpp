#include <bits/stdc++.h>
using namespace std;
void findThreeLargestElements(int arr[], int n){
   cout<<"\nThree largest elements are ";
    vector<int> vsort (n);
     copy(arr + 0, arr + 5, vsort.begin());
     partial_sort(vsort.begin(), vsort.begin() + 3, vsort.end(), greater<int>()); 
     for (int i = 0; i < 3; i++)
     {
      cout<<vsort[i]<<" ";
     }
     
}
int main(){
   int arr[] = {15, 2, 7, 86, 0, 21, 50, 53, 50};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<"The array is : ";
   for(int i = 0; i < n; i++)
      cout<<arr[i]<<"\t";
   findThreeLargestElements(arr, n);
   return 0;
}