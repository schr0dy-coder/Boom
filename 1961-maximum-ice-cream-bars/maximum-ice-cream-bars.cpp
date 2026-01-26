class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0]>coins) return 0;
        long long max=0,sum=0;
        for(int i=0;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum<=coins)
            {
                max++;
            }
        }
        return max;
    }
};