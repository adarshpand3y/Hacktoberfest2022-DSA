import java.util.*;

class MatrixAddition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Matrix1\nEnter the number of rows: ");
        int m = sc.nextInt();
        System.out.print("Enter the number of collumn: ");
        int n = sc.nextInt();

        System.out.print("Matrix2\nEnter the number of rows: ");
        int x = sc.nextInt();
        System.out.print("Enter the number of rows: ");
        int y = sc.nextInt();

        if (m != x || n != y) {
            System.out.println("Addition not possible");
            return;
        }

        int[][] a = new int[m][n];
        int[][] b = new int[x][y];

        System.out.println("Enter the matrix-1");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }

        System.out.println("Enter the matrix-2");
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++) {
                b[i][j] = sc.nextInt();
            }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(a[i][j] + b[i][j] + " ");
            }
            System.out.println(" ");
        }
    }
}
