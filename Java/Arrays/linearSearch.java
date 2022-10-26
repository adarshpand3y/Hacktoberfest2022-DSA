package array1D;

import java.util.Scanner;

public class linearSearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr={14,255,33,24,52,64,45,89};
		int flag=0;
		Scanner ss=new Scanner(System.in);
		int n=ss.nextInt();
		int index=0;
		for(int i=0;i<arr.length;i++) {
			if(n==arr[i])
				{flag=1;
			    index=i;
				}
		}
		if(flag==1)
		System.out.println("Value found at "+ (index+1)+".");
		else
		System.out.println("Value not found.");
	}

}
