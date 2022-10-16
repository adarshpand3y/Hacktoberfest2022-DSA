class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
                int row = matrix.size();
        for(int i=0; i<row; ++i) {
            for(int j=i; j<row; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<row; ++i) {
            int start = 0, end = row-1;
            while(start < end) {
                swap(matrix[i][start], matrix[i][end]);
                ++start;
                --end;
            }
        }
    }
};