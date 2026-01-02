class Solution {
    public int repeatedNTimes(int[] nums) {
        boolean[] freq=new boolean[10001];
        for(int i:nums){
            if(!freq[i]){
                freq[i]=true;
            }
            else{
                return i;
            }
        }
        return -1;
    }
}