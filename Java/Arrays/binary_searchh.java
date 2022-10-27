/*
In binary search we split the array by finding it's 
midpoint and the search is comparitively faster than 
linear search 
*/

import java.util.Scanner;

public class binary_searchh {

    public static int binary(int arr[],int si,int ei,int d){
        int a = -1;
        if(si>ei){
            return -1;
        }

        int mid = (si+ei)/2;

        if(arr[mid]==d){
            return mid;
        }
        if(mid==arr.length-1){
            return a;
        }
        if(arr[mid]<d){
           a =  binary(arr,mid+1,ei,d);
        }
        else {
          a = binary(arr,si,mid-1,d);
        }
        return a;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};

        Scanner s = new Scanner(System.in);
        System.out.println("Enter no. to be searched");
        int d = s.nextInt();
        System.out.println(binary(arr,0,arr.length-1,d));
    }
}
