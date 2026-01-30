class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n+1);
        arr[0] = 0;
        arr[1] = 1;
        int i2 = 1;
        int i3 = 1;
        int i5 = 1;
        for(int i = 2; i<n+1; i++){
            int value2 = 2 * arr[i2];
            int value3 = 3 * arr[i3];
            int value5 = 5 * arr[i5];
            int nextUgly = min({value2, value3, value5});
            arr[i] = nextUgly;
            if(value2 == nextUgly){
                i2++;
            }
            if(value3 == nextUgly){
                i3++;
            }
            if(value5 == nextUgly){
                i5++;
            }
        }
        return arr[n];
    }
};