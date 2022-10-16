// This program is used to count the numbers with even digits in an array
// for example an array of {12, 345, 2, 6, 7896} will return 2 because 12 and 7896 have even digits. 

import java.util.Scanner;

public class even_digits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of array: ");
        int l = sc.nextInt();
        int[] arr = new int[l];
        System.out.print("Enter Array: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Output: " + search(arr));
        sc.close();
    }

    static int search(int arr[]) {
        int f = 0;
        for (int i : arr) {
            int c = 0;
            if (i == 0)
                continue;
            while (i != 0) {
                i = i / 10;
                c++;
            }
            if (c % 2 == 0) {
                f++;
            }
        }
        return f;
    }
}
