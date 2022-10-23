#include <stdio.h>

void main()
  
  {
  int arr1[50][50],brr1[50][50],i,j,r,c;
  
        


       printf("Enter the number of rows : ");
       scanf("%d",&r);
       printf("Enter the number of columns : ");
       scanf("%d",&c);


       printf("Input elements in the first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        } 

 	 printf("\nThe matrix is :\n");
  		for(i=0;i<r;i++)
    		{
      		printf("\n");
      		for(j=0;j<c;j++)
          	printf("%d\t",arr1[i][j]);
    		}
  
  for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
            {
                   brr1[j][i]=arr1[i][j];
            }
      }

      printf("\n\nThe transpose of a matrix is : ");
      for(i=0;i<c;i++){
      printf("\n");
      for(j=0;j<r;j++){
           printf("%d\t",brr1[i][j]);
      }
  }
      printf("\n\n");
}
