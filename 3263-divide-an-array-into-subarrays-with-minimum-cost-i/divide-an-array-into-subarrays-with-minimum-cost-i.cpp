class Solution {
public:
    int minimumCost(vector<int>& nums) {
        long long sum = nums[0];
        int min_idx = -1;
        long long min_value = INT_MAX;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] < min_value){
                min_value = nums[i];
                min_idx = i;
            }
        }
        sum+=min_value;
        min_value= INT_MAX;
        for(int i = 1; i<nums.size(); i++){
            if(i!=min_idx){
                if(nums[i] < min_value){
                    min_value = nums[i];
                }
            }
        }
        sum+=min_value;
        return (int)sum;
    }
};