class Solution {
    public int[][] transpose(int[][] matrix) {
        int[][] arr = new int[matrix[0].length][matrix.length];
        
        for(int row = 0; row<matrix[0].length ; row++){
            for(int column = 0; column < matrix.length; column++){
                
                arr[row][column] = matrix[column][row];
              
            }
        }
        
   return arr;
    }
}