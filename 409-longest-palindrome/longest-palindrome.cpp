class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        bool centreUsed = false;
        int result = 0;
        for(char ch : s){
            if(mp[ch] == 1 && !centreUsed){
                mp[ch]--;
                result++;
                centreUsed = true;
            }
            if(mp[ch]>1){
                mp[ch] -= 2;
                result+=2;
            }
        }
        return result;
    }
};