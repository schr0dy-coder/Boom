class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = nums[0];
        int min_idx = -1;
        int min_value = INT_MAX;
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
        return sum;
    }
};