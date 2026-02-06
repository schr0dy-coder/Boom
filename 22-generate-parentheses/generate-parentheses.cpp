class Solution {
public:
    void solve(vector<string> &ans, int n, int o, int c, string s){
        if(o==n && c == n){
            ans.push_back(s);
            return;
        }
        if(o<n) solve(ans, n, o+1, c, s+'(');
        if(c<o) solve(ans, n, o, c+1, s+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans, n, 0, 0, "");
        return ans;
    }
};