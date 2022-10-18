import java.awt.*;
import java.io.*;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;
import java.util.HashMap;
import java.util.Map;

public class Basketball {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();

        long[][] h=new long[2][n];
        long[][] dp=new long[2][n];

        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++)h[i][j]=sc.nextLong();
        }


        dp[0][0]=h[0][0];
        dp[1][0]=h[1][0];

        for(int i=1;i<n;i++){
            if(i==1){
                dp[0][1]=dp[1][0]+h[0][1];
                dp[1][1]=dp[0][0]+h[1][1];
            }
            else{
                dp[0][i]=h[0][i]+Long.max(dp[1][i-1],dp[1][i-2]);
                dp[1][i]=h[1][i]+Long.max(dp[0][i-1],dp[0][i-2]);
            }
        }

        if(dp[0][n-1]>dp[1][n-1]) System.out.println(dp[0][n-1]);
        else System.out.println(dp[1][n-1]);
    }

}

