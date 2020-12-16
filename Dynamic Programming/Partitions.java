import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Partitions {
    public static boolean subsetSum(int[] arr, int n, int a, int b, int c) {
        if (a == 0 && b == 0 && c == 0) {
            return true;
        }
        if (n < 0) {
            return false;
        }

        boolean A = false;
        if (a - arr[n] >= 0) {
            A = subsetSum(arr, n - 1, a - arr[n], b, c);
        }

        boolean B = false;
        if (!A && (b - arr[n] >= 0)) {
            B = subsetSum(arr, n - 1, a, b - arr[n], c);
        }

        boolean C = false;
        if ((!A && !B) && (c - arr[n] >= 0)) {
            C = subsetSum(arr, n - 1, a, b, c - arr[n]);
        }

        return A || B || C;
    }
    static boolean partitionsAction(int[] arr){
        if (arr.length<3){
            return false;
        }
        int sum = Arrays.stream(arr).sum();
        return (sum % 3) == 0 && subsetSum(arr, arr.length - 1, sum/3, sum/3, sum/3);
    }
    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int[] arr = fs.readArray(n);
        System.out.println(partitionsAction(arr)?"1":"0");
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
