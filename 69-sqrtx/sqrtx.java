class Solution {
    public int mySqrt(int x) {
        int r = 0;
        if(x == 1 || x == 2 || x == 3)
            return 1;
        for(long i = 0; i<x; i++){
            if(i*i > x){
                r = (int)i-1;
                break;
            }
        }
        return r;
    }
}