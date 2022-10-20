#include<stdio.h>
#include<stdlib.h>
void insertionsort(int*x,int size){
    int y,z,num;
    y=1;
    while(y<=size-1){
        num=x[y];
        z=y-1;
        while ((z>=0)&&(x[z]>num))
        {
            x[z+1]=x[z];
            z--;
        }
    x[z+1]=num;
    y++;    
    }
}
int main(){
    int req;
    int *x;
    x=(int*)malloc(sizeof(int)*req);
    printf("enter ur requirement: ");
    scanf("%d",&req);
    for (int i = 0; i < req; i++)
    {
        printf("enter the number: ");
        scanf("%d",&x[i]);
    }
    insertionsort(x,req);
    for (int i = 0; i < req; i++)
    {
        printf("%d\n",x[i]);
    }
    
    return 0;
}
