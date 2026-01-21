class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobProfiles;
        jobProfiles.push_back({0,0});
        for (int i = 0; i < difficulty.size(); i++) {
            jobProfiles.push_back({profit[i], difficulty[i]});
        }
        sort(jobProfiles.begin(), jobProfiles.end());
        reverse(jobProfiles.begin(), jobProfiles.end());
        for(int i =0; i<jobProfiles.size()-1; i++){
            jobProfiles[i+1].second = min(jobProfiles[i].second, jobProfiles[i+1].second);
        }
        int netProfit = 0;
        for (int i = 0; i<worker.size(); i++){
            int ability = worker[i];
            int l = 0, r = jobProfiles.size()-1, jobProfit = 0;
            while(l<=r){
                int mid = (l+r)/2;
                if(jobProfiles[mid].second <= ability){
                    jobProfit = max(jobProfit, jobProfiles[mid].first);
                    r = mid -1;
                }
                else{
                    l = mid+1;
                }
            }
            netProfit +=jobProfit;
        }
        return netProfit;
    }
};