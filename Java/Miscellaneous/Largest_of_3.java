// This program finds the largest of three numbers

import java.util.Scanner;

public class Largest_of_3 {
    public static void main(String[] args) {
        System.out.print("Enter three numbers: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (a > b && a > c) {
            System.out.println("Largest Number is: " + a);
        } else if (b > a && b > c) {
            System.out.println("Largest Number is: " + b);
        } else {
            System.out.println("Largest Number is: " + c);
        }
        sc.close();
    }
}

// With math function: int max = Math.max(c, Math.max(a,b))
