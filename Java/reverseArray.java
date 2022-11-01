import java.util.Arrays;

public class Main{
    public static void main(String[] args){
        int[] arr = {1,2,5,7,8};
//        calling reverseString function
        reverseString(arr);
        System.out.println(Arrays.toString(arr));
    }

// this function is used to reverse the arrays using swap function
    static void reverseString(int[] arr){
        int start = 0;
        int end = arr.length-1;

        while (start < end){
            swap(arr, start,end);
            start++;
            end--;
        }
    }
    
// this function is used to swapping the integers at certain indices
    static void swap(int[] arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}



