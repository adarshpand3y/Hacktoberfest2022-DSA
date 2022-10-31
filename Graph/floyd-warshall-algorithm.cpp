#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void shortest_distance(vector<vector<int>>&matrix){
	int max_iter = matrix.size();
	
	for(int i=0; i<max_iter; i++){
		for(int j=0; j<max_iter; j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 100000000;
			}
		}
	}
	
	for(int i=0; i<max_iter; i++){
		for(int j=0; j<matrix.size(); j++){
			for(int k=0; k<matrix.size(); k++){
				matrix[j][k] = min(matrix[j][k], matrix[j][i] + matrix[i][k]);
			}
		}
	}
					
	for(int i=0; i<max_iter; i++){
		for(int j=0; j<max_iter; j++){
			if(matrix[i][j] == 100000000){
				matrix[i][j] = -1;
			}
		}
	}

}

int main(){
	int t;
	cin>>t;
	while (t--) {

		int n;
		cin>>n;
		vector<vector<int>> matrix(n, vector<int>(n, -1));

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>matrix[i][j];
			}
		}
		
		shortest_distance(matrix);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout << matrix[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}