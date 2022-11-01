// just a simple leetcode question on arrays

import java.util.Arrays;

public class PlusOne{
    public static void main(String[] args){
        int[] arr = {1,2,3};
        arr[2] = arr[2] + 1;
        System.out.println(Arrays.toString(arr));
    }
}