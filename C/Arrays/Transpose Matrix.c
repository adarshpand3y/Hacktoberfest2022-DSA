#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{
  int A[MAX][MAX],B[MAX][MAX],I,J,M,N;
  printf("ENTER THE SIZE OF A MATRIX (M X N) : \n");
  printf("ENTER VALUE FOR M:");
  scanf("%d",&M);
  printf("ENTER VALUE FOR N:");
  scanf("%d",&N);
if(M==N)
  {
   printf("ENTER %d\t X %d MATRIX A VALUES\n",M,N);
   for(I=0;I<M;I++)
   {
         for(J=0;J<N;J++)
         {
              scanf("%d",&A[I][J]);
          }
    }
  }
  printf("\nRESULT MATRIX A VALUES ARE :\n",M,N);
  for(I=0;I<M;I++)
  {
      for(J=0;J<N;J++)
      {
          printf("%d\t",A[I][J]);
      }
      printf("\n");
  }
  for(I=0;I<N;I++)
  {
    for(J=0;J<M;J++)
    {
      B[I][J]=A[J][I];
    }
  }
  printf("\n The transpose of matrix is:\n");
  for(I=0;I<N;I++)
  {
    printf("\n");
    for(J=0;J<M;J++)
    {
      printf("%d\t",B[I][J]);
    }
  }
}
