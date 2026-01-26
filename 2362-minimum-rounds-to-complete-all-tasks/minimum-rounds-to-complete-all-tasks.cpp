class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        for(int i : tasks){
            mp[i]++;
        }
        int rounds = 0;
        for(auto &p:mp){
             if(p.second==1) return -1;
             rounds+=p.second/3;

             if(p.second%3!=0) rounds++;
        }
        return rounds;
    }
};