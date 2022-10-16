#include <bits/stdc++.h>
using namespace std;

void delete_element(int a[],int n,int pos)
{
   for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    } 
}

void display_array(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={67,90,9,45,3,2};
    int n=6;
    int pos=2;
    delete_element(a,n,pos);
    display_array(a,n);
    return 0;
}
