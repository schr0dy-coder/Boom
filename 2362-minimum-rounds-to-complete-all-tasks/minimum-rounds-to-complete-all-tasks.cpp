class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        for(int i : tasks){
            mp[i]++;
        }
        int rounds = 0;
        for(int i : tasks){
            if(mp[i] == 2){
                mp[i]-= 2;
                rounds+=1;            
            }
            if(mp[i] == 3){
                mp[i]-= 3;
                rounds+=1;            
            }
            if(mp[i] == 4){
                mp[i]-= 4;
                rounds+=2;            
            }
            if(mp[i] == 5){
                mp[i]-=5;
                rounds+=2;
            }
            if(mp[i] == 6){
                mp[i]-= 6;
                rounds+=2;            
            }
            if(mp[i] == 1){
                return -1; 
                break;
            }
            if(mp[i] > 6){
                 mp[i]-=3;
                 rounds++;
            }
        }
        return rounds;
    }
};