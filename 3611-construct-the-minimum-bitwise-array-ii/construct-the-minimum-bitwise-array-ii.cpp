class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        for(int p : nums){
            if (p == 2) {
                ans.push_back(-1);
                continue;
            }

            int temp = p;
            int trailingOnes = 0;

            while (temp & 1) {
                trailingOnes++;
                temp >>= 1;
            }

            int x = p - (1 << (trailingOnes - 1));
            ans.push_back(x);
        }
        return ans;
    }
};