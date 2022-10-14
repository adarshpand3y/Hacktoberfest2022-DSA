#include <stdio.h>

void merge(int array[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++) {
        L[i] = array[left + i];
    }
    
    for(int j = 0; j < n2; j++) {
        R[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
    
}

void merge_sort(int array[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

int main() {
    
    int n;

    printf("\nEnter number of elements to sort: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter the elements of the array\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    merge_sort(array, 0, n - 1);

    printf("\nElements after sorting through merge sort\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    return 0;
}
