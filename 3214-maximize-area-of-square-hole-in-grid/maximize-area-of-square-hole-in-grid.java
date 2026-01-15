class Solution {
    public int maximizeSquareHoleArea(int n, int m, int[] hBars, int[] vBars) {
        Arrays.sort(hBars);
        Arrays.sort(vBars);
        int hMax = longestConsecutive(hBars);
        int vMax = longestConsecutive(vBars);
        int side = Math.min(hMax, vMax) + 1;
        return side * side;
    }
    private int longestConsecutive(int [] arr){
        int max = 0, curr = 0;
        for(int i = 0; i<arr.length; i++){
            if(i==0 || arr[i] != arr[i-1] + 1)
                curr = 1;
            else
                curr++;
            max = Math.max(max, curr);
        }
        return max;
    }
}