public class searchIn2Dstaircase {
    public static boolean staircaseSearch(int matrix[][],int key){
        int row=matrix.length-1;
        int col=0;
        while(row>=0&&col<=matrix[0].length-1){
          if(matrix[row][col]==key){
              System.out.println("key found at ("+row+","+col+")");
              return true;
          }
         else if(matrix[row][col]<key){
              col++;
          }else{
              row++;
          }
        }
        return false;
}
public static void main(String[] args) {
  int matrix[][]={
      {23 ,34 ,343, 34, 78},
      {38, 39, 93 ,87},
      {4, 6, 8},
      {99}
};
  int key=99;
  staircaseSearch(matrix, key);
}
}


