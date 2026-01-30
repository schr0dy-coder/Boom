class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        auto lambda = [](const auto& p1, const auto& p2) {
            return p1[0] < p2[0];
            };
        sort(intervals.begin(), intervals.end(), lambda);
        ans.push_back(intervals[0]);
        for(int i = 0; i< intervals.size(); i++){
            if (intervals[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};