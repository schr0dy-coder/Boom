class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int pairs = 0;
        vector<int> c(60);
        for(int t : time){
            pairs+= c[(600-t)%60];
            c[t%60]++;
        }
        return pairs;
    }
};