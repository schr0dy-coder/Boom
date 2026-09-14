class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> ban_Set(banned.begin(), banned.end());
        int c = 0, s = 0;
        for(int j = 1; j<=n; j++){
            if(ban_Set.count(j)) continue;
            if(s+j > maxSum) break;
            c++;
            s+=j;
        }
        return c;
    }
};