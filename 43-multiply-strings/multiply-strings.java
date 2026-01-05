class Solution {
    public String multiply(String num1, String num2) {
        if(num1.equals("0") || num2.equals("0"))
            return "0";
        int m = num1.length();
        int n = num2.length();
        int [] res = new int[m+n];
        for(int i = m-1; i>=0; i--){
            int d1 = num1.charAt(i) - '0';
            for(int j = n-1; j>=0; j--){
                int d2 = num2.charAt(j) - '0';
                int p = d1*d2;
                int sum = p + res[i+j+1];
                res[i+j+1] = sum%10;
                res[i+j] += sum/10;
            }
        }
        StringBuilder ans = new StringBuilder();
        for(int r : res){
            if(!(ans.length()==0 && r == 0))
                ans.append(r);
        }
        return ans.toString();
    }
}