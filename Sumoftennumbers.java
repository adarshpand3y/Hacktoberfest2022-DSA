import java.util.Scanner;
public class Main
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number");
int num=sc.nextInt();
int sum=0;
for (int i=num; i<=num+9; i++){
sum+=i;
}
System.out.println("The sum of ten numbers is "+sum);
}
}
