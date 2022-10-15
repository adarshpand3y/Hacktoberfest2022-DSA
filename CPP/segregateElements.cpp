// C++ program to Move All -ve Element At End
// Without changing order Of Array Element
#include<bits/stdc++.h>
using namespace std;

// Moves all -ve element to end of array in
// same order.
void segregateElements(int arr[], int n)
{
	// Create an empty array to store result
	int temp[n];

	// Traversal array and store +ve element in
	// temp array
	int j = 0; // index of temp
	for (int i = 0; i < n ; i++)
		if (arr[i] >= 0 )
			temp[j++] = arr[i];

	// If array contains all positive or all negative.
	if (j == n || j == 0)
		return;

	// Store -ve element in temp array
	for (int i = 0 ; i < n ; i++)
		if (arr[i] < 0)
			temp[j++] = arr[i];

	// Copy contents of temp[] to arr[]
	memcpy(arr, temp, sizeof(temp));
}

// Driver program
int main()
{
	int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);

	segregateElements(arr, n);

	for (int i = 0; i < n; i++)
	cout << arr[i] << " ";

	return 0;
}
