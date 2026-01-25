class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1)
            return 0;
        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        for(int i = 0; i<=nums.size()-k; ++i){
            int curr_diff = nums[i+k-1]-nums[i];
            min_diff = min(min_diff, curr_diff);
        }
        return min_diff;
    }
};