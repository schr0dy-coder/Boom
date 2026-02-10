class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        size_t n = dist.size();
        vector<float> time(n);
        for(size_t i = 0; i<n; i++){
            time[i] = ((float)dist[i])/speed[i];
        }
        sort(time.begin(), time.end());
        int count = 1;
        for(int i = 1; i<n; i++){
            if(i < time[i])
                count++;
            else{
                break;
            }
        }
        return count;
    }
};