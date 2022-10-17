// C++ program for addition of two matrices
/*
Input:
n=3 m=3
MATRIX 1:
1   4   9
16  25  36
49  64  81
MATRIX 2:
1   2   3
4   5   6
7   8   9
Output:
Ans Matrix:
2   6   12
20  30  42
56  72  90
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,m,i,j;
    cout<<"Enter size of the Matrix: ";
    cin>>n>>m;
    vector<vector<int>> Mat1,Mat2,ans;
    cout<<"Enter Elements in first Matrix:\n";
    for(i=0;i<n;i++){
		vector<int>a;
		for(j=0;j<m;j++){
			int v;
            cin>>v;
			a.push_back(v);
        }
		Mat1.push_back(a);
    }
    cout<<"Enter Elements in second Matrix:\n";
    for(i=0;i<n;i++){
		vector<int>a;
		for(j=0;j<m;j++){
			int v;
            cin>>v;
			a.push_back(v);
        }
		Mat2.push_back(a);
    }

	cout << "Result matrix is " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
            cout<<Mat1[i][j]+Mat2[i][j]<<"\t";
		cout << endl;
	}

	return 0;
}

// Time Complexity = O(n*m)
