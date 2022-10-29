#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cout <<"hello welcome"<<endl;

    while(t--)
    {
        int g,p,n,sum1=0,sum2=0,ans;
        cin>>g>>p>>n;
        
        int a[10][2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
               cin>>a[i][j];
            }
        }
        
        for(int i=0;i<n;i++)
        {
                if(a[i][0]==1)
                 sum1=sum1+g;
                if(a[i][1]==1)
                 sum1=sum1+p;
        }
        for(int i=0;i<n;i++)
        {
                if(a[i][0]==1)
                 sum2=sum2+p;
                if(a[i][1]==1)
                 sum2=sum2+g;
        }
        ans=sum1>sum2?sum2:sum1;
        cout<<ans<<endl;
    }

    return 0;
}
