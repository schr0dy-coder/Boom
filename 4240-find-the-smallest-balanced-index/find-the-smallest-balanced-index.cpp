class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long long lsum = 0;
        for (int x : nums) lsum += x;

        int result = -1;
        long long rprod = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            lsum -= nums[i];  
            if (lsum == rprod) 
                return i;
            if (lsum < rprod)  
                break;

            rprod *= nums[i];  
        }

        return -1;
    }
};