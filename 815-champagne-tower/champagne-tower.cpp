class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> curr(101, 0.0), nxt(101, 0.0);
        curr[0] = poured;
        for(int r = 0; r< query_row; r++){
            fill(nxt.begin(), nxt.end(), 0.0);
            for(int c = 0; c<=r; c++){
                double spill = max(0.0, curr[c]-1.0);
                if(spill>0){
                    nxt[c]+=spill/2.0;
                    nxt[c+1] += spill/2.0;
                }
            }
            curr.swap(nxt);
        }
        return min(1.0, curr[query_glass]);
    }
};