public class TransposeMatrix {

    public static void main(String args[]) {
        int row = 0;
        int column = 0;
        int n, c, d;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns in matrix");
        row = sc.nextInt();
        column = sc.nextInt();
          
        int matrix[][] = new int[row][column];

        System.out.println("Enter the elements of matrix");

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("Transpose Matrix: ");

        int transpose[][] = new int[column][row];
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {
                System.out.printf("%s ", transpose[j][i]);
            }
            System.out.print("\n");
        }

    }

}
