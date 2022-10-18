/* TOPIC: ARRAY
 * LEETCODE QUESTION : 498- Diagonal Traverse
 * Question : Gicen an m x n matrix mat, return an array of all the elements of the array in a diagonal order.
 * Runtine : 99.14 % fast and Memory Usage : 97.67%
 */

class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
      if (mat == null) {
            throw new IllegalArgumentException("Input matrix is null");
        }
        if (mat.length == 0 || mat[0].length == 0) {
            return new int[0];
        }

        int m = mat.length;
        int n = mat[0].length;
        int[] result = new int[m * n];
        int rows = 0;
        int cols = 0;

        for (int i = 0; i < result.length; i++) {
            result[i] = mat[rows][cols];
            if ((rows + cols) % 2 == 0) { 
                if (cols == n - 1) {
                    rows++;
                } else if (rows == 0) {
                    cols++;
                } else {
                   
                    rows--;
                    cols++;
                }
            } else { 
                if (rows == m - 1) {
                    
                    cols++;
                } else if (cols == 0) {
                    
                    rows++;
                } else {
                    
                    rows++;
                    cols--;
                }
            }
        }

        return result;
    }
}