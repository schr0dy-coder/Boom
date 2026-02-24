class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for(int x: nums)
            sum += x;
        for(int i = nums.size()-1; i>=2; i--){
            int last_edge = nums[i];
            sum -= last_edge;
            if(sum > last_edge)
                return sum+last_edge;
        }
        return -1;
    }
};