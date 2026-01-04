class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        if(n == 0) return {-1, -1};
        if(n==1 && target == nums[0]) return {0,0};
        int t = -1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                t = m;
                break;
            }
            else if(nums[m] < target){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        if(t == -1){
            return {-1, -1};
        }
        int l1  = t, r1 = t;
        while(l1>0 && nums[l1-1] == target)
            l1--;
        while(r1 < n-1 && nums[r1+1] == target)
            r1++;
        return {l1, r1};

    }
};