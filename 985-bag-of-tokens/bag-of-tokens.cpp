class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int i = 0;
        int score = 0;
        int j = tokens.size()-1;
        int max_score = score;
        while(i<=j){
            if(power>=tokens[i]){
                power -= tokens[i];
                score++;
                i++;
                max_score = max(max_score, score);
            }
            else if(score>0){
                power+=tokens[j];
                score--;
                j--;
            }
            else
                break;
        }
        return max_score;
    }
};