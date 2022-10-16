package Arrays;
import java.util.*;

//Given an array of N integers. Find the elements that appear more than N/3 times in the array

public class Majority_Element {
    public static ArrayList < Integer > majorityElement(int[] nums) {

        int number1 = -1, number2 = -1, count1 = 0, count2 = 0, len = nums.length;
        for (int i = 0; i < len; i++) {
            if (nums[i] == number1)
                count1++;
            else if (nums[i] == number2)
                count2++;
            else if (count1 == 0) {
                number1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                number2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        ArrayList < Integer > ans = new ArrayList < Integer > ();
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == number1)
                count1++;
            else if (nums[i] == number2)
                count2++;
        }
        if (count1 > len / 3)
            ans.add(number1);
        if (count2 > len / 3)
            ans.add(number2);
        return ans;
    }

    public static void main(String[] args) {
        int arr[] = {1, 2, 2, 3, 2};
        ArrayList < Integer > majority = majorityElement(arr);
        System.out.print("The majority element is: ");
        HashSet < Integer > s = new HashSet < > (majority);
        for (int it: s) {
            System.out.print(it + " ");
        }
        System.out.println();
    }
}
