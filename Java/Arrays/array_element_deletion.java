import java.util.Scanner;
public class array_element_deletion {
public static void main(String args[])
{
	int nums[]= {2,4,6,7,9};
	System.out.print("Enter the element you want to delete");
	
	Scanner input=new Scanner(System.in);
	int element=input.nextInt();
	
	
	for(int i=0; i<nums.length; i++)
	{
		if(element==nums[i])
		{
			for(int j=i; j<nums.length-1; j++)
			{
				  nums[j] = nums[j+1];	
			}
			 break;
					}
		
		
	}
	for(int i=0; i<nums.length-1; i++)
	{
		System.out.print("\n"+nums[i]);
	}
	
}
}
