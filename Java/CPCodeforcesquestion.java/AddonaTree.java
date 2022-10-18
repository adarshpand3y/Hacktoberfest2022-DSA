
import java.awt.*;
import java.util.*;
import java.io.*;
public class addonatree {
    static LinkedList<Integer>[] adj;
    public static void main(String[] args){
        FastReader sc = new FastReader();
        StringBuilder sb = new StringBuilder();
        int n=sc.nextInt();
        adj=new LinkedList[n];
        for(int i=0;i<n;i++)adj[i]=new LinkedList<>();
        for(int i=0;i<n-1;i++){
            int u=sc.nextInt()-1,v=sc.nextInt()-1;
            adj[u].add(v);
            adj[v].add(u);
        }
        for(int i=0;i<n;i++){
            if(adj[i].size()==2){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}
class FastReader {
    BufferedReader br;
    StringTokenizer st;

    public FastReader() { br = new BufferedReader(new InputStreamReader(System.in)); }
    String next() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }
    int nextInt() { return Integer.parseInt(next()); }
    long nextLong() { return Long.parseLong(next()); }
    double nextDouble() { return Double.parseDouble(next()); }
    String nextLine() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}
