class Solution {
    public int longestOnes(int[] nums, int k) {
        int l = 0, r = 0, zeroes = 0, max_length = 0;
        while(r<nums.length){
            if(nums[r] == 0){
                zeroes++;
            }
            while(zeroes>k){
                if(nums[l] == 0)
                    zeroes--;
                l++;
            }
            max_length = Math.max(max_length, r-l+1);
            r++;
        }
        return max_length;
    }
}