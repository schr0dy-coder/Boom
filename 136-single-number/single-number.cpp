class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int element : nums){
            sum^=element;
        }
        return sum;
    }
};