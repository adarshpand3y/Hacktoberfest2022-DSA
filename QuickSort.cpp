// C++ Implementation of the Quick Sort Algorithm.
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(vector<int>&arr, int start, int end)
{
    if (start >= end)
		return;
	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}

int main()
{    
    int n ;
    cout<<"Enter the size of array :";cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
      int temp;cin>>temp;
      arr[i]=temp;
    }
    quickSort(arr, 0, n - 1);
    cout<<"Sorted array will be :"<<endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
