class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> startEnd(n+1, 0);
        for(int i = 0; i<n+1; i++){
            int left = max(0,i-ranges[i]);
            int right = min(n, i+ranges[i]);
            startEnd[left] = max(startEnd[left], right);
        }
        int watered = 0;
        int taps = 0;
        int currEnd = 0;
        for(int i = 0; i<n+1; i++){
            if(i>watered) return -1;
            if(i > currEnd) {
                taps++;
                currEnd = watered;
            }
            watered = max(watered, startEnd[i]);
            
        }
        return taps;
    }
};