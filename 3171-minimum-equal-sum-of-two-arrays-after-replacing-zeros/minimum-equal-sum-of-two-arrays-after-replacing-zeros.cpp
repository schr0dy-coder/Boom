class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c_zero1 = 0, c_zero2 = 0;
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) {
                c_zero1++;
            }
            sum1+=nums1[i];
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (nums2[i] == 0) {
                c_zero2++;
            }
            sum2+=nums2[i];
        }
        long long min1 = sum1 + c_zero1;
        long long min2 = sum2 + c_zero2;

        if (min1 < min2 && c_zero1 == 0) return -1;
        if (min2 < min1 && c_zero2 == 0) return -1;

        return max(min1, min2);
    }
};