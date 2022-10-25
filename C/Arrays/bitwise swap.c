#include <stdio.h>
int main()
{
int num1, num2;
/* Input two numbers from user */
printf("Enter any two numbers: ");
scanf("%d%d", &num1, &num2);
printf("Original value of num1 = %d\n", num1);
printf("Original value of num2 = %d\n", num2);
/* Swap two numbers */
num1 =num1^ num2;
num2 = num2^num1;
num1 = num1^num2;
printf("Num1 after swapping = %d\n", num1);
printf("Num2 after swapping = %d\n", num2);
return 0;
}
