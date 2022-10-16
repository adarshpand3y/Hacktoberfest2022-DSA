#include<stdio.h>
int N;
int n=0;
int arr[100];
void create()
{
 printf("Enter the size of the array: ");
 scanf("%d",&N);
 arr[N];
}
void insert(int pos,int v)
{
 if(n==N)
 {
 	printf("Insertion not possible. No empty cell found.");
 }
 else if(pos>n+1)
 {
 	printf("Insertion not possible. Incorrect Position.");
 }
 else
 {
 	int i;
 	for(i=n;i>=pos;i--)
 	{
 		arr[i]=arr[i-1];
 	}
 	arr[i]=v;
 	n++;
 }
}
void delete(int pos)
{
	if(pos>n)
	{
		printf("Deletion not possible. Incorrect position.");
	}
	else
	{
		int i;
		for(i=pos-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;
	}
}

void reverse()
{
	int i;
	for(i=0;i<(n/2);i++)
	{
		int t=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=t;
	}
}
void display()
{
	printf("The current array elements are :- \n");
	int i;
	for(i=0;i<n;i++)
	{
	printf("%d ,",arr[i]);
	}
	printf("\n");
}
int main()
{
	int p,val;
	int ch=0;
	do
	{
	  printf("Enter 1 to create, 2 to insert, 3 to delete, 4 to reverse the array and 5 to exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
	 		case 1:
	 			create();
	 			break;
	 		case 2:
	 			printf("Enter the position to be inserted into : ");
 	 			scanf("%d",&p);
 	 			printf("Enter the value to be inserted : ");
 	 			scanf("%d",&val);
	 			insert(p,val);
	 			display();
	 			break;
	 		case 3:
	 			printf("Enter the position to be deleted : ");
   			scanf("%d",&p);
	 			delete(p);
	 			display();
	 			break;
	 		case 4:
	 			reverse();
	 			display();
	 			break;
		}	
	}while(ch!=5);
	printf("Terminated.");
return 0;
}
