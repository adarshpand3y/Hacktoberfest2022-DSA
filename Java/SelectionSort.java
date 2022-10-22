package Sorting;

import java.util.Arrays;
import java.util.Scanner;

public class SelectionSort {
	public static void min(String args[])
	{
		 Scanner s=new Scanner(System.in);
			int n=s.nextInt();
			int arr[]=new int[n];
			for (int i=0;i<n;i++) {
				arr[i]=s.nextInt();}
			selection(arr);
			System.out.println(Arrays.toString(arr));
			
	}
static void selection(int arr[])
{
	for (int i=0;i<arr.length;i++) {
		int max=i;
		for(int j=i+1;j<arr.length;j++)
		{
			if(arr[j]>arr[max])
			{
				max=j;
			}
			int temp=arr[max];
			arr[max]=arr[i];
			arr[i]=temp;
		}
	}
	
}
}
