import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CoinChange {
    static int minMovs(int money,int[] coins,int[] dp){
        int aux = Integer.MAX_VALUE;
        for (int coin:coins) {
            if(money-coin>=0)
            aux = Math.min(dp[money-coin],aux);
        }
        return aux;
    }
    public static void main(String[] args) {
        int[] coins = new int[]{4,3,1};
        FastScanner fs = new FastScanner();
        int money =  fs.nextInt();
        int[] dp = new int[money+1];
        dp[0]=0;
        //dp[1]=1;
        for (int i = 1; i < dp.length; i++) {
            dp[i]=minMovs(i,coins,dp)+1;
        }
        System.out.println(dp[money]);
    }
    static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
        int[] readArray(int n) {
            int[] a=new int[n];
            for (int i=0; i<n; i++) a[i]=nextInt();
            return a;
        }
        long nextLong() {
            return Long.parseLong(next());
        }
    }
}
