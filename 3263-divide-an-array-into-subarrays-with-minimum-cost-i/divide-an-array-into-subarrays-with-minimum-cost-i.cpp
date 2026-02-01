class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = 51, b = 51; 
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < b){
                b = nums[i];
                if(b < a) swap(a, b);
            }
        }
        return a + b + nums[0];
    }
};