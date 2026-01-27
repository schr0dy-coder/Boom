class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ops = 0;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i] < nums[i - 1]) {
                int parts = nums[i - 1] / nums[i];
                if (nums[i - 1] % nums[i] != 0) {
                    parts++;
                }
                ops += parts-1;
                nums[i-1] = nums[i-1]/parts;
            }
        }
        return ops;
    }
};