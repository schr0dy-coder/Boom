class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<> ();
        Arrays.sort(nums);
        for(int i = 0; i<nums.length-2; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            if(nums[i] >0) break;
            int comp = -nums[i];
            int l = i+1;
            int r = nums.length-1;
            while(l<r){
                if(nums[l]+nums[r] == comp){
                    List<Integer> p = new ArrayList<>();
                    p.add(nums[i]);
                    p.add(nums[l]);
                    p.add(nums[r]);
                    res.add(p);
                    while(l<r && nums[l] == nums[l+1]) l++;
                    while(l<r && nums[r] == nums[r-1]) r--;
                }
                if(nums[l]+nums[r] > comp)
                    r--;
                else
                    l++;
            }
        }
        return res;
    }
}
