import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class EditDistance {
    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String word1 = fs.next();
        String word2 = fs.next();
        int n = word1.length();
        int m = word2.length();
        char[] w1 = word1.toCharArray();
        char[] w2 = word2.toCharArray();
        int[][] dp = new int[n+1][m+1];
        for (int i = 0; i < n+1; i++) {
            dp[i][0]=i;
        }
        for (int j = 0; j < m+1; j++) {
            dp[0][j]=j;
        }
        for (int i = 1; i < n+1; i++) {
            for (int j = 1; j < m+1; j++) {

                    int inertion = dp[i][j-1]+1;
                    int deletion = dp[i-1][j]+1;
                    int match = dp[i-1][j-1];
                    int mistMacth = dp[i-1][j-1]+1;

                    if (w1[i-1]==w2[j-1]){
                        dp[i][j]=Math.min(Math.min(inertion,deletion),match);
                    }
                    else {
                        dp[i][j]=Math.min(Math.min(inertion,deletion),mistMacth);
                    }


            }
        }
        System.out.println(dp[n][m]);

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
