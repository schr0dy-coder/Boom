class Solution {
    public int climbStairs(int n, int[] costs) {
        int [] dp = new int[n+1];
        for(int i = 1; i<=n; i++){
            int opt1, opt2, opt3;
            opt1=opt2=opt3=Integer.MAX_VALUE;
            if(i-1>=0)
                opt1 = 1+costs[i-1] + dp[i-1];
            if(i-2>=0)
                opt2 = 4+costs[i-1] + dp[i-2];
            if(i-3>=0)
                opt3 = 9+costs[i-1] + dp[i-3];
            dp[i] = Math.min(Math.min(opt1, opt2), opt3);
        }
        return dp[n];
    }
}