class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int th = 1;
        for (int i = 1; i < n; ++i)
            th = min(th + 1, arr[i]);
        return th;
    }
};