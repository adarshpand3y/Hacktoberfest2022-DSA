#include<iostream>
using namespace std;
long long merge(long long v[],int l,int h,int m)
    {
        long long int i=l,t=l,j=m,k=0,ans=0;
        vector<long long> res;
        while(i<=m-1 && j<=h)
        {
            if(v[i]>v[j])
            {
                ans+=m-i;
                res.push_back(v[j]);
                j++;
            }
            else
            {
                res.push_back(v[i]);
                i++;
            }
        }
        
        while(i<=m-1)
        {
            res.push_back(v[i]);
            i++;
        }
        
        while(j<=h)
        {
            res.push_back(v[j]);
            j++;
        }
        
        for(auto &i : res)
        {
            v[t]=i;
            t++;
        }
        
        return ans;
    }
    long long find(long long v[],int l,int h)
    {
        if(l>=h)
          return 0;
        
        int m = l + (h-l)/2;
        
        long long int a = find(v,l,m);
        long long int b = find(v,m+1,h);
        long long int c = merge(v,l,h,m+1);
        
        return (a+b+c);
    }
long long CountInversionArray(int a[], int n) {
    return find(a,0,n-1);
}
int main() {
   int n, i;
   cout<<"\nEnter the number of elements: ";
   cin>>n;
   int a[n];
   for(i = 0; i < n; i++) {
      cout<<"Enter element "<<i+1<<": ";
      cin>>a[i];
   }
   cout<<"\nThe number of inversion in the array: "<<CountInversionArray(a, n);
   return 0;
}
