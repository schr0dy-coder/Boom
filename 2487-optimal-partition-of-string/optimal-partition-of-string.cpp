class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        vector<int> lastSeen(26, -1);
        int count = 0;
        int currSubstrStart = 0;
        for(int i =0; i<n; i++){
            char ch = s[i];
            if(lastSeen[ch-'a'] >= currSubstrStart){
                count++;
                currSubstrStart = i;
            }
            lastSeen[ch-'a'] = i;
        }
        return count+1;
    }
};