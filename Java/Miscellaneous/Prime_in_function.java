// Prime numbers using functions
// Prime numbers are numbers that are divisible only by 1 and themselves
// for example 2, 3, 5, 7, ... etc. are prime numbers

import java.util.Scanner;

public class Prime_in_function {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        if (isPrime(n) == true) {
            System.out.println("Prime");
        } else {
            System.out.println("not prime");
        }
        sc.close();
    }

    static boolean isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i <= Math.sqrt(n);) {
            if (n % i == 0)
                return false;
            else
                return true;
        }
        return false;
    }

}
