import java.util.Arrays;
import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements in array ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        
        System.out.print("Enter elements of array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("printing array before sorting ");
        System.out.println(Arrays.toString(arr));

        // calling bubble sort function
        bubbleSort(arr);

        System.out.println("Printing array after sorting ");
        System.out.println(Arrays.toString(arr));
    }

    static void bubbleSort(int[] array) {

        for (int i = 0; i < array.length; i++) {

            for (int j = 1; j < array.length - i; j++) {

                if (array[j] < array[j - 1]) {
                    int temp = array[j];
                    array[j] = array[j - 1];
                    array[j - 1] = temp;
                }
            }
        }

    }
}
