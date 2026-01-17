class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int mask = 0, left = 0, ans = 0;
        for(int r = 0; r<nums.size(); r++){
            while((mask & nums[r])!=0){
                mask ^= nums[left];
                left+=1;
            }
            mask|= nums[r];
            ans = max(ans, r-left+1);
        }
        return ans;
    }
};