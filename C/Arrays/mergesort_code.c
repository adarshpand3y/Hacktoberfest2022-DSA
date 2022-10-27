// Merge Sort Algorithm

// Start
// 1. Declare Array, left, right and mid variables
// 2. Find mid by formula mid = (left+right)/2
// 3. Call MergeSort for the left to mid
// 4. Call MergeSort for mid+1 to right
// 5. Continue step 2, 3, and 4 while the left is less than the right
// 6. Then Call the Merge function

// End

// Time Complexity: O(N log(N))

#include <stdio.h>

void ArrayPrint(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main()
{

    int A[] = {19, 12, 2, 14, 4, 67, 6, 89};
    int n = 8;
    printf("\nBefore Sorting : ");
    ArrayPrint(A, n);
    mergeSort(A, 0, n - 1);
    printf("\nAfter Sorting : ");
    ArrayPrint(A, n);
    return 0;
}
