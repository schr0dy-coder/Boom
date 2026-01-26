class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        int n = words.size();
        for(string &word : words){
            mp[word]++;
        }
        bool centreUsed = false;
        int result = 0;
        for(string &word : words){
            string rev = word;
            reverse(word.begin(), word.end());
            if(rev!=word){
                if(mp[word]>0 && mp[rev]>0){
                    mp[word]--;
                    mp[rev]--;
                    result+=4;
                }
            }
            else{
                if(mp[word] > 1){
                    mp[word]-=2;
                    result+=4;
                }
                if(mp[word] == 1 && !centreUsed){
                    mp[word]--;
                    centreUsed = true;
                    result+=2;
                }
            }
        }
        return result;
    }
};