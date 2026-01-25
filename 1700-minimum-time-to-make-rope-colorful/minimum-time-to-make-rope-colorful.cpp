class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int prevMax = 0;
        int curr = 0;
        int time = 0;
        for(int i = 0; i<n; i++){
            if(i>0 && colors[i] != colors[i-1]){
                prevMax = 0;
            }
            curr = neededTime[i];
            time += min(prevMax, curr);
            prevMax = max(prevMax, curr);
        }
        return time;
    }
};