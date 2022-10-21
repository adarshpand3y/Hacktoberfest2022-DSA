public class Selection  
{  
    void selection(int a[]) /* function to sort an array with selection sort */  
{  
    int i, j, small;  
    int n = a.length;  
    for (i = 0; i < n-1; i++)  
    {  
        small = i; //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (a[j] < a[small])  
            small = j;  
// Swap the minimum element with the first element  
    int temp = a[small];  
    a[small] = a[i];  
    a[i] = temp;  
    }  
  
}  
void printArr(int a[]) /* function to print the array */  
{  
    int i;  
    int n = a.length;  
    for (i = 0; i < n; i++)  
    System.out.print(a[i] + " ");  
}  
  
    public static void main(String[] args) {  
    int a[] = { 91, 49, 4, 19, 10, 21 };  
    Selection i1 = new Selection();  
    System.out.println("\nBefore sorting array elements are - ");  
    i1.printArr(a);  
    i1.selection(a);  
    System.out.println("\nAfter sorting array elements are - ");  
    i1.printArr(a);  
    System.out.println();  
    }  
}  

Output :
![Screenshot (255)](https://user-images.githubusercontent.com/110158906/197147475-fc2200e9-9829-4a96-b763-7a2e3ce12b45.png)
