class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n+1);
        arr[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for(int i = 1; i<n+1; i++){
            int value2 = 2 * arr[i2];
            int value3 = 3 * arr[i3];
            int value5 = 5 * arr[i5];
            arr[i] = min({value2, value3, value5});
            if(value2 == arr[i]) i2++;
            if(value3 == arr[i]) i3++;
            if(value5 == arr[i]) i5++;
        }
        return arr[n-1];
    }
};