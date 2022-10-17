#include<bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>>&matrix){
    int row= matrix.size();
    int col= matrix[0].size();

    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
int main(){
    int row ,col;
    cout<<"Enter the number of row :";
    cin>>row;
    col=row;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           int temp;cin>>temp;
           matrix[i][j]=temp;
        }
    }

    transpose(matrix);
    cout<<"The transposed matrix will be :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
