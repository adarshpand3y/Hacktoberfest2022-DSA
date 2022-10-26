/*
Push Zeros To End

Problem Description: Given a random integer array, push all the zeros that are
present to the end of the array. The respective order of other elements should
remain the same.
 */

import java.util.Scanner;

public class PushZeroToEnd {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Size of Array: ");
        int n = in.nextInt();

        // Input Array Elements
        int arr[] = new int[n];
        System.out.println("Enter Array Elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        //Logic to Push zeros to end
        int nonZero = 0;
        for(int i = 0; i<arr.length; i++){
            if(arr[i]!=0){
                int temp = arr[i];
                arr[i] = arr[nonZero];
                arr[nonZero] = temp;
                nonZero++;
            }
        }

        //Print updated array
        for (int j = 0; j < n; j++) {
            System.out.print(arr[j]+ " ");
        }

    }
}
