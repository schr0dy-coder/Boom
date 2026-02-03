class Solution {
public:
    typedef long long ll;
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int maxLIS = 1;
        vector<int> dp(n, 1);
        for(int i = 1; i<n; i++){
           for(int j = 0; j<i; j++){
                if(nums[i] > nums[j]){
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
            maxLIS = max(maxLIS, dp[i]);
        }
        return maxLIS;
    }
};