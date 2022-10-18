import java.util.Arrays;

public class MaxMinIn2DArr {
    public static void main(String[] args) {
        int[][] arr = {
                {2,14,67,89},
                {45,78,51,1},
                {8,9,3}
        };
        //System.out.println("Index of Max valued item of array: ");
        //System.out.println(Arrays.toString(searchMax(arr)));
        //System.out.println("Index of Min valued item of array: ");
        //System.out.println(Arrays.toString(searchMin(arr)));
        System.out.println("Max valued item: ");
        System.out.println(searchMax(arr));
        System.out.println("Min valued item: ");
        System.out.println(searchMin(arr));
    }

    static int searchMax(int[][] arr){
        int maxVal = Integer.MIN_VALUE;
        //if(arr.length == 0){
          //  return new int[] {-1,-1};
        //}
        int row,col;
        for(row=0;row< arr.length;row++){
            for(col=0; col< arr[row].length; col++){
                if(arr[row][col] >= maxVal){
                    maxVal = arr[row][col];
                    //int[] temp = new int[]{row,col};
                }
            }
        }
        return maxVal;
        //return new int[];
    }

    static int searchMin(int[][] arr){
        int minVal = Integer.MAX_VALUE;
        //if(arr.length == 0){
          //  return new int[] {-1,-1};
        //}
        int row,col=0;
        for(row=0;row<arr.length;row++){
            for(col=0;col<arr[row].length;col++){
                if(arr[row][col] <= minVal) {
                    minVal = arr[row][col];
                }
            }
        }
        return minVal;
        //return new int[] {row,col};
    }

}