// FIBONACCI USING RECURSION
// This is a code for obtaining the number in the fibonacci series at nth position


public class Fibonacci {
    public static void main(String[] args) {
        System.out.println(fibo(4));
        
    }

    public static int fibo(int n){
        // base condition
        if (n<2){
            return n;
        }
        int x= fibo(n-1) + fibo(n-2);
        return x;
    }
}
