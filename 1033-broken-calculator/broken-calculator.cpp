class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ops = 0;
        while(target != startValue){
            if(target < startValue){
                target++;
                ops++;
            }
            else if(target%2 == 0){
                target /= 2;
                ops++;
            }
            else{
                target++;
                ops++;
            }
            
        }
        return ops;
    }
};