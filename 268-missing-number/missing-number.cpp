class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n)*(n+1)/2.0;
        int s = 0;
        for(int i: nums)
            s+=i;
        return sum-s;
    }
};