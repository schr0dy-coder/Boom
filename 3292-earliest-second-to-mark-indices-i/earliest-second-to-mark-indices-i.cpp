class Solution {
public:
    int n, m;
    bool allIndexMarked(int sec, vector<int>& changeIndices, vector<int>& nums){
        vector<int> lastPos(n+1, -1);
        for(int i = 0; i<=sec; i++){
            int idx = changeIndices[i];
            lastPos[idx] = i+1;
        }
        for(int i = 1; i<=n; i++){
            if(lastPos[i] == -1){
                return false;
            } 
        }
        map<int,int> posIdx;
        for(int i = 1; i<=n; i++){
            int position = lastPos[i];
            posIdx[position] = i;
        }
        int time_passed = 0;
        for(auto& [pos, idx]: posIdx){
            int required_time = nums[idx-1]+1;
            if(required_time + time_passed > pos){
                return false;
            }
            time_passed += required_time;
        }
        return true;
    }

    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        n = nums.size();
        m = changeIndices.size();

        for(int time = 0; time<m; time++){
            if(allIndexMarked(time, changeIndices, nums)){
                return time+1;
            }
        }
        return -1;
    }
};