// Input an array and number ('num') for the which the sum of the array elements will be equal to that entered number ('num').
// Find the total number of pairs in the array/list which sum to 'num'.

import java.util.Scanner;
public class pair_sum_in_array
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Created object of the Solution class
        Solution s = new Solution();
        
        // Accept the array size
        System.out.println("Enter the size of the array : ");
        int n = sc.nextInt();
        
        // Create a array of the input size
        int a[] = new int[n];
        
        // Input the array elements
        System.out.println("\nEnter the array elements : ");
        for(int i = 0; i<n; i++)
        {
            a[i] = sc.nextInt();
        }
        
        // Input the 'num'
        System.out.println("\nEnter the number to find the pairs in the array : ");
        int num = sc.nextInt();
        
        // Call the method pairSum from Solution class containing the code for the count of pair
        int Pair_number = s.pairSum(a, num);
        
        System.out.println("\nNumber of pairs in the array having sum equal to "+num+" are : "+Pair_number);

        System.out.println("Thank you :)");
    }
}

// Create a class Solution
class Solution {	

	public static int pairSum(int[] arr, int num) {
	    
	   // Initialize a counter called as count to zero 
		int count=0;
		
        // Every element in the array will be added and checked with all the next elements in the array. If their addition will be equal to 'num' then increment the counter.
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i+1;j<arr.length;j++){
                
                if(arr[i]+arr[j]==num)
                {
                    count++;
                }
            }
        }
        return count;
	}
}
