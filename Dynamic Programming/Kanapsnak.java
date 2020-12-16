import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.util.*;

public class Kanapsnak {
    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int w = fs.nextInt();
        int n = fs.nextInt();
        int[] gold = new int[n+1];
        for (int i = 1; i <= n; i++) {
            gold[i]=fs.nextInt();
        }
        int[][] dp = new int[n+1][w+1];
        dp[0][w-1]=0;
        for(int i=0;i<=w;i++){
            dp[0][i]=0;
        }
        for (int i = 1; i <= n; i++) {
            dp[i][0]=0;
            for (int j = 1; j <= w; j++) {
                if (gold[i]<=j){
                    int l1=gold[i]+dp[i-1][j-gold[i]];
                    int l2=dp[i-1][j];
                    if(l1>l2) dp[i][j]=l1;
                    else dp[i][j]=l2;
                }
                else dp[i][j]=dp[i-1][j];
                }
            }
        System.out.println(dp[n][w]);
    }
    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }
}
