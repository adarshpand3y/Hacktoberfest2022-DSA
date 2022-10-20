#include<stdio.h>
#include<stdlib.h>
void selectionsort(int*x,int size){
    int si,g;
    for (int e = 0; e<= size-2; e++)
    {
        si=e;
        for (int f = e+1; f <= size-1; f++)
        {
            if (x[f]<x[si])
            {
                si=f;
            }
            
        }
       g=x[si];
       x[si]=x[e];
       x[e]=g; 
    }
    

}
int main(){
    int req;
    int*x;
    printf("enter ur requirement: ");
    scanf("%d",&req);
    x=(int*)malloc(sizeof(int)*req);
    for (int i = 0; i < req; i++)
    {
        printf("enter the number: ");
        scanf("%d",&x[i]);
    }
    selectionsort(x,req);
    for (int i = 0; i < req; i++)
    {
        printf("%d\n",x[i]);
    }
    
    
    return 0;
}
