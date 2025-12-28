import java.io.*;

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
    }

    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);
        int t = fs.nextInt();
        
        while (t-- > 0) {
            int n = fs.nextInt();
            int alice = fs.nextInt();
            int leftCount = 0;
            int rightCount = 0;

            for (int j = 0; j < n; j++) {
                int v = fs.nextInt();
                if (v < alice) leftCount++;
                else if (v > alice) rightCount++;
            }

            if (rightCount > leftCount) {
                out.println(alice + 1);
            } else if (leftCount > rightCount) {
                out.println(alice - 1);
            } else {
                out.println(alice + 1); 
            }
        }
        out.flush();
    }
}
