class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int [] pos = new int[n/2];
        int [] neg = new int[n/2];
        int i = 0, j= 0;
        for(int num : nums){
            if(num<0)
                neg[i++] = num;
            else
                pos[j++] = num; 
        }
        i = 0; j = 0;
        for(int k = 0; k<n; k+=2){
            nums[k] = pos[i++];
            nums[k+1] = neg[j++]; 
        }
        return nums;
    }
}