class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n);
        arr[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for(int i = 1; i<n; i++){
            arr[i] = min({2 * arr[i2], 3 * arr[i3], 5 * arr[i5]});
            if(2 * arr[i2] == arr[i]) i2++;
            if(3 * arr[i3] == arr[i]) i3++;
            if(5 * arr[i5] == arr[i]) i5++;
        }
        return arr[n-1];
    }
};