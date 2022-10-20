#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>>v)
{

    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            int t=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=t;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Given vector is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<"Transposed vector is:"<<endl;
    transpose(v);
    
}
