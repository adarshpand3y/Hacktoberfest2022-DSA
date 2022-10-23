#include<stdio.h>
#include<stdlib.h>
int fact (int n);
int main ()
{
  int x, i;
  printf ("\n Enter a value for x: ");
  scanf ("%d", &x);
  i = fact (x);
  printf ("\n Factorial of %d is %d \n", x, i);
  return 0;
}

int fact (int n)
{
  if (n == 0)
    {
      return 1;
    }
  else
    {
      return (n * fact (n - 1));
    }
}
