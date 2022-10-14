
public class CountNumberOf1Bits {

  public static void main (String[]arr){
    
    int n =  00000000000000000000000000001011;
    System.out.println(count(n));
  }
    // you need to treat n as an unsigned value

    public int count(int n) {

        //Method Brute Force
        // int-->string then count character == '1'

        // Method 02:

        int counter=0;

        while (n!=0){
          counter+= (n & 1);
            n=n>>>1;
        }
        return counter;
    }
}


/*
In Java we need to put attention on the fact that the maximum integer is 2147483647. Integer type in Java is signed and there is no unsigned int. So the input 2147483648 
is represented in Java as -2147483648 (in java int type has a cyclic representation, 
that means Integer.MAX_VALUE+1==Integer.MIN_VALUE).
This force us to use

n!=0

in the while condition and we cannot use

n>0

because the input 2147483648 would correspond to -2147483648 
in java and the code would not enter the while if the condition is 
n>0 for n=2147483648.
*/
