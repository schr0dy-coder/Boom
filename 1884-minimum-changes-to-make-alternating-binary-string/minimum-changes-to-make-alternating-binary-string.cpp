class Solution {
public:
    int minOperations(string s) {
        int m1 = 0, m2 = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(i%2 == 0 && s[i] == '0'){
                m1++;
            }
            if(i%2 == 0 && s[i] == '1'){
                m2++;
            }
            if(i%2 == 1 && s[i] == '1'){
                m1++;
            }
            if(i%2 == 1 && s[i] == '0'){
                m2++;
            }
        }
        return min(m1, m2);
    }
};