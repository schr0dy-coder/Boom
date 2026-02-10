class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int m  = n/3;
        sort(piles.begin(), piles.end());
        int coins = 0;
        for(int i = n-2, j = 0; j<m; i-=2, j++){
            coins+=piles[i];
        }
        return coins;
    }
};