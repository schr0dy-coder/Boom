import java.io.*;
import java.util.Arrays;
public class Main {
    static class FastScanner {
        private final InputStream in = System.in;
        private final byte[] buffer = new byte[1 << 16];
        private int ptr = 0, len = 0;
 
        private int readByte() throws IOException {
            if (ptr >= len) {
                len = in.read(buffer);
                ptr = 0;
                if (len <= 0) return -1;
            }
            return buffer[ptr++];
        }
 
        long nextLong() throws IOException {
            int c;
            while ((c = readByte()) <= ' ') {
                if (c == -1) return Long.MIN_VALUE;
            }
            boolean neg = false;
            if (c == '-') {
                neg = true;
                c = readByte();
            }
            long val = 0;
            while (c > ' ') {
                val = val * 10 + (c - '0');
                c = readByte();
            }
            return neg ? -val : val;
        }
 
        int nextInt() throws IOException {
            return (int) nextLong();
        }
 
        String next() throws IOException {
            int c;
            while ((c = readByte()) <= ' ') {
                if (c == -1) return null;
            }
            StringBuilder sb = new StringBuilder();
            while (c > ' ') {
                sb.append((char) c);
                c = readByte();
            }
            return sb.toString();
        }
    }
    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int [] coins = new int[n];
        for (int i = 0; i < n; i++) {
            coins[i] = fs.nextInt();
        }
        Arrays.sort(coins);
        int sum = 0;
        for (int coin : coins) {
            sum+=coin;
        }
        int mySum = sum/2;
        int currSum = 0;
        int count = 0;
        for (int i = n-1; i >= 0; i--) {
            currSum+=coins[i];
            count++;
            if(currSum>mySum){
                break;
            }
        }
        System.out.println(count);
    }
}
