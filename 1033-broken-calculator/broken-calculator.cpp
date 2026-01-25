class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ops = 0;
        while(target != startValue){
            if(target < startValue){
                while(target!=startValue){
                    target++;
                    ops++;
                }
                break;
            }
            else if(target%2 == 0){
                target /= 2;
            }
            else{
                target++;
            }
            ops++;
        }
        return ops;
    }
};