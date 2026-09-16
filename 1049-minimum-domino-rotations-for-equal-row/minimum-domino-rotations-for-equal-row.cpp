class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        
        for (int i = 1; i <= 6; i++) {
            int swapTop = 0;
            int swapBottom = 0;
            bool possible = true;

            for (int j = 0; j < n; j++) {
                if (tops[j] != i && bottoms[j] != i) {
                    possible = false;
                    break;
                }
                if (tops[j] != i) swapTop++;
                if (bottoms[j] != i) swapBottom++;
            }

            if (possible) {
                return min(swapTop, swapBottom);
            }
        }
        return -1;
    }
};