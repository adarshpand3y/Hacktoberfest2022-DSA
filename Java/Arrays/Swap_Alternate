/*
Problem Description: You are given with an array of length N, you have to swap every pair of
alternate elements in the array.
For example:N= 6
arr[] = 9 3 6 12 4 32
Output after swapping : 3 9 12 6 32 4

 */

import java.util.Scanner;

public class SwapAlternate {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Size of Array: ");
        int n = in.nextInt();

        // Input Array Elements
        int arr[] = new int[n];
        System.out.println("Enter " +n+ " Array Elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        // Logic to Swap Alternate Elements
        for (int i = 0; i < (arr.length - 1); i += 2) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        // Print/Output updated new Array with alternate elements swapped
        for (int j = 0; j < n; j++) {
            System.out.print(arr[j]+ " ");
        }
    }
}
