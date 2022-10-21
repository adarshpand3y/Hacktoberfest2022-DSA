//Aditya Mali
//21-10-22
//Merge Sort using C

#include<stdio.h>

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        simplemerge(a,low,mid,high);
        
    }
    
}
void simplemerge(int a[],int low,int mid,int high)
{
    int temp[50],i,j,k;
    i=low;j=mid+1;
    k=0;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
            
        }
        else
        temp[k++]=a[j++];
        
    }
    while(i<=mid)
    temp[k++]=a[i++];
    while(j<=high)
    temp[k++]=a[j++];
    k=0;
    for(i=low;i<=high;i++)
    a[i]=temp[k++];
}
int main()
{
    int a[20],n,i;
    printf("enter nos of elements in array\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("original order of elements\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    mergesort(a,0,n-1);
    printf("sorted order of elements\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}