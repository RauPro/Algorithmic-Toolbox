import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class PrimativeCalculator {
    public static void main(String[] args) {
        B.FastScanner fs = new B.FastScanner();
        int n= fs.nextInt();
        List<Integer> sequence = new ArrayList<Integer>();
        int [] a = new int[n+1];
        for(int i =1; i< a.length; i++){
            a[i] = a[i-1]+1;
            if (i%2 == 0)
                a[i] = Math.min(1+a[i/2], a[i]);
            if (i%3 == 0)
                a[i] = Math.min(1+a[i/3], a[i]);

        }
        int i = n;
        while (i>1) {
            sequence.add(i);
            if (a[i-1] == a[i]-1)
                i = i-1;
            else if (i%2 == 0 && (a[i/2] == a[i]-1))
                i = i/2;
            else if (i%3 == 0 && (a[i/3] == a[i]-1))
                i = i/3;
        }
        sequence.add(1);
        Collections.reverse(sequence);
        System.out.println(sequence.size()-1);
        for (int d:sequence) {
            System.out.print(d+ " ");
        }
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
