/*
 Selection sort
Example
Index 0 1 2 3 4 5
value 7 4 10 8 3 1
n = 6
1) Start the travelsal of the array from the first i.e. index 0
2) find the lowest element in array from index 1 to n-1 check that lowest number is lower than
element at 0 index as well
3) if yes swap that number with o index element
4) increment the count of varialbe pass
Result 1) 1 4 10 8 3 7
Sorted array = 1
Non sorted array = 4 10 8 3 7
Result 2) 1 3 10 8 4 7
Sorted array = 1 3
Non sorted array = 10 8 4 7
Result 3) 1 3 4 8 10 7
Sorted array = 1 3 4
Non sorted array = 8 10 7
Result 4) 1 3 4 7 10 8
Sorted array = 1 3 4 7
Non sorted array = 10 8
Result 5) 1 3 4 7 8 10
Sorted array = 1 3 4 7 8
Non sorted array = 10
We will stop process now as all elements are sorted
if only one element is present in non sorted that means sorting of all elements is done
// Java program for implementation of Selection Sort
 */

class SelectionSort {
    void sort(int arr[]) {
        int n = arr.length;
        // One by one move boundary of unsorted subarray
        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in unsorted array
            int min_idx = i;
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            // Swap the found minimum element with the first
            // element
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }

    // Prints the array
    void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    // Driver code to test above
    public static void main(String args[]) {
        SelectionSort ob = new SelectionSort();
        int arr[] = { 7, 4, 10, 8, 3, 1, };
        ob.sort(arr);
        System.out.println("Sorted array");
        ob.printArray(arr);
    }
}
