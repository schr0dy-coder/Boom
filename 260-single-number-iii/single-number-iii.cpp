class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorVal = 0;
        for(int n : nums) xorVal^=n;
        unsigned int ux = static_cast<unsigned int>(xorVal);
        unsigned int diff = ux & -ux;
        int a = 0, b = 0;
        for(int n: nums)
            if(n & diff) a^=n;
            else b^=n;
        return {a,b};
    }
};