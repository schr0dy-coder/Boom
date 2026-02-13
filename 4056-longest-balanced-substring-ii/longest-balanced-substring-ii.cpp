class Solution {
public:
    int helper(string& s, char ch1, char ch2){
        int n = s.length();
        unordered_map<int, int> diffMap;
        int count1 = 0, count2 = 0;
        int maxLength = 0;
        for(int i = 0; i<n; i++){
            if(s[i]!= ch1 && s[i] != ch2){
                diffMap.clear();
                count1 = 0;
                count2 = 0;
                continue;
            }
            if(s[i] == ch1){
                count1++;
            }
            if(s[i] == ch2){
                count2++;
            }
            if(count1 == count2){
                maxLength = max(maxLength, count1+count2);
            }
            int diff = count1-count2;
            if(diffMap.count(diff)){
                maxLength = max(maxLength, i-diffMap[diff]);
            }
            else{
                diffMap[diff] = i;
            }
        }
        return maxLength;
    }
    int longestBalanced(string s) {
        int n = s.length();
        int length = 0;
        int maxLength = 0;
        char g = s[0];
        for(char c: s){
            if(g == c){
                length++;
            }
            else{
                maxLength = max(maxLength, length);
                g = c;
                length = 1;
            }
        }
        maxLength = max(maxLength, length);
        maxLength = max(maxLength, helper(s, 'a', 'b'));
        maxLength = max(maxLength, helper(s, 'b', 'c'));
        maxLength = max(maxLength, helper(s, 'c', 'a'));


        int countA = 0, countB = 0, countC = 0;
        unordered_map<string, int> diffMap;
        for(int i = 0; i<n; i++){
            if(s[i] == 'a'){
                countA++;
            }
            if(s[i] == 'b'){
                countB++;
            }
            if(s[i] == 'c'){
                countC++;
            }
            if(countA == countB && countA == countC){
                maxLength = max(maxLength, countA + countB + countC);
            }
            int diffAB = countA - countB;
            int diffAC = countA - countC;
            string key = to_string(diffAB) + "_" + to_string(diffAC);
            if(diffMap.count(key)){
                maxLength = max(maxLength, i-diffMap[key]);
            }
            else{
                diffMap[key] = i;
            }
        }

        return maxLength;
    }
};