class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int sum = 0;
        
        //Summing up diagonal 1
        for(int i=0;i<n;i++){
            sum += mat[i][i];
        }
        
        //Summing up diagonal 2
        for(int i=0;i<n;i++){
            sum += mat[i][n-i-1];
        }
        
        //If element repeating (in case n odd) subtracting that
        if(n%2==1){
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
}
