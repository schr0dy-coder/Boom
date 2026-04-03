class Solution {
public:
    int minimumCost(int m, int n, vector<int>& h, vector<int>& v) {
        int x = h.size(), y = v.size();
        sort(h.rbegin(), h.rend());
        sort(v.rbegin(), v.rend());
        int i = 0, j = 0;
        int horizontal = 1, vertical = 1;
        int result = 0;
        while(i < x && j < y){
            if(h[i] >= v[j]){
                result += h[i] * vertical;
                horizontal++;
                i++;
            }
            else{
                result += v[j] * horizontal;
                vertical++;
                j++;
            }
        }
        while(i < x)
        {
            result += h[i] * vertical;
            horizontal++;
            i++;
        }
        while(j < y){
            result += v[j] * horizontal;
                vertical++;
                j++;
        }
        return result;
    }
};