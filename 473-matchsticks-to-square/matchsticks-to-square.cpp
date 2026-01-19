class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        long long total_sum = accumulate(matchsticks.begin(), matchsticks.end(), 0LL);
        if(total_sum%4 != 0 || matchsticks.size()<4)
            return false;
        int side_length = total_sum/4;
        sort(matchsticks.rbegin(), matchsticks.rend());
        if(matchsticks[0] > side_length)
            return false;
        vector<int> sides(4, 0);
        return backtrack(0, matchsticks, sides, side_length);
    }

private:
    bool backtrack(int index, const vector<int>&matchsticks, vector<int>& sides, int target){
        if(index == matchsticks.size())
            return true;
        for(int i = 0; i<4; i++){
            if(sides[i] + matchsticks[index] <= target){
                sides[i]+=matchsticks[index];
                if(backtrack(index+1, matchsticks, sides, target)){
                    return true;
                }
                sides[i]-= matchsticks[index];
            }
            if(sides[i] == 0) break;
        }
        return false;
    }
};