class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
    unordered_map<int, int> counts;
    for (int b : bulbs) counts[b]++;
    
    vector<int> ans;
    for (auto const& [id, freq] : counts) {
        if (freq % 2 != 0) ans.push_back(id);
    }
    sort(ans.begin(), ans.end()); 
    return ans;
}
};