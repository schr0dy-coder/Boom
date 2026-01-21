class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for(int x: nums)
            strs.push_back(to_string(x));
        sort(strs.begin(), strs.end(), [](const string &A, const string &B){
            return A+B > B+A;
        });
        if(strs[0] == "0")
            return "0";
        string ans = "";
        for(string &x : strs){
            ans+=x;
        }
        return ans;
    }
};