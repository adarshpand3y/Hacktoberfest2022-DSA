// This programs is used to find fibonacci numbers
// fibonacci numbers are defined as the sum of the previous two numbers
//for example 1,1,2,3,5,8,13,.....etc

import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        System.out.println("Enter the Nth term: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 0, b = 1, c = 0;
        for (int i = 0; i < n; i++) {
            a = b;
            b = c;
            c = a + b;
        }
        System.out.print("The term is: " + c);
        sc.close();
    }
}
