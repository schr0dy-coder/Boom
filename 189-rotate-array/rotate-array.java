class Solution {
    public void rotate(int[] nums, int k) {
        int [] arr = new int[nums.length];
        k = k%nums.length;
        int n = nums.length-k;
        int j = 0;
        for(int i = n; i<arr.length; i++)
            arr[j++] = nums[i];
        for(int i = 0; i<n; i++)
            arr[j++] = nums[i];
        for(int i = 0; i<nums.length; i++){
            nums[i] = arr[i];
        }
    }
}