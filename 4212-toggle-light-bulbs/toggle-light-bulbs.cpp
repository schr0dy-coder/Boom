class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(), bulbs.end());
        vector<int> ans;
        int count = 1;
        int prev = bulbs[0];
        for (int i = 1; i < bulbs.size(); i++) {
            if (bulbs[i] == prev) {
                count++;
            } else {
                if (count % 2 == 1) {
                    ans.push_back(bulbs[i-1]);
                }
                count = 1;
                prev = bulbs[i];
            }
        }
        if(count%2 == 1)
            ans.push_back(bulbs[bulbs.size()-1]);
        return ans;
    }
};