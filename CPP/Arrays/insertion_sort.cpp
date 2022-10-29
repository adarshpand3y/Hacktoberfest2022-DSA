#include<iostream>
using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int temp, j;
   for(int i = 1; i<size; i++) {
      temp = array[i];
      j = i-1;
      while(j >=0 && array[j]>temp) {
         array[j+1] = array[j];
         j--;
      }
      array[j+1] = temp;   //insert in right place
   }
}

int main() {
   int n;
   cout <<"hello welcome"<<endl;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}