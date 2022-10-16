// Armstrong number is a number that is equal to the sum of cubes of its digits.
//for example 153 = 1^3 + 5^3 + 3^3 
//where: 1, 5, 3 are digits of 153.

//This program is used to print all three digit armstrong numbers between 100 and 999.

public class Armstrong {
    public static void main(String[] args) {
        for (int i = 100; i < 1000; i++) {
            if (isArmstrong(i) == true) {
                System.out.print(i + " ");
            }
        }
    }

    static boolean isArmstrong(int n) {
        int m = n;
        int s = 0, c = 0;
        while (n != 0) {
            c = n % 10;
            s = s + (c * c * c);
            n = n / 10;
        }
        if (s == m) {
            return true;
        } else {
            return false;
        }
    }
}