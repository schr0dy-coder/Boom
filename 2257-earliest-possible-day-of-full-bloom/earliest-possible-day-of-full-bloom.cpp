class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> seeds(n);
        for(int i = 0; i< n; i++){
            seeds[i] = {plantTime[i], growTime[i]};
        }
        auto lambda = [](pair<int, int> & p1, pair<int, int>& p2){
            return p1.second > p2.second;
        };
        sort(seeds.begin(), seeds.end(), lambda);
        int maxBloomDays = 0;
        int prevPlantDays = 0;
        for(int i = 0; i< n; i++){
            int currPlantTime = seeds[i].first;
            int currGrowTime = seeds[i].second;
            prevPlantDays += currPlantTime;
            int bloomTime = prevPlantDays + currGrowTime;
            maxBloomDays = max(maxBloomDays, bloomTime);
        }
        return maxBloomDays;
    }
};