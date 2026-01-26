class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        if(costs.empty()) return 0;
        int maxVal = *max_element(costs.begin(), costs.end());
        vector<int> count(maxVal+1, 0);
        for(int num: costs)
            count[num]++;
        int index = 0;
        for(int i = 0; i<=maxVal; i++)
            while(count[i]-->0)
                costs[index++] = i;
        count.clear();
        int ice_creams = 0;
        for(int i : costs){
            if(coins>=i){
                ice_creams++;
                coins-=i;
            }
        }
        return ice_creams;
    }
};