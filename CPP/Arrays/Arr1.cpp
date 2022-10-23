#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort_012_num(int nums[], int n)
{
    int i = 0;
    int j = n - 1;
    int mid_num = 0;
 
    while (mid_num <= j)
    {
        switch (nums[mid_num])
        {
        case 0:
            swap(&nums[i++], &nums[mid_num++]);
            break;
        case 1:
            mid_num++;
            break;
        case 2:
            swap(&nums[mid_num], &nums[j--]);
            break;
        }
    }
}
 
 
int main()
{
    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    sort_012_num(nums, n);
 
    printf("\nArray elements after rearranging: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      }