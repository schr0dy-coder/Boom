class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxEnd = 0;
        int jump = 0;
        int currEnd = 0;
        for(int i = 0; i<n; i++){
            if(i > currEnd){
                jump++;
                currEnd = maxEnd;
            }
            maxEnd = max(maxEnd, i+nums[i]);
        } 
        return jump;
    }
};