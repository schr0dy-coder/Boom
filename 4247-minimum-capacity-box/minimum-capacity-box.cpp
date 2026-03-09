class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int min_ans=INT_MAX, idx;
        for(int i = 0;  i<capacity.size(); i++){
            if(capacity[i]>=itemSize && min_ans>capacity[i]){
                min_ans = capacity[i];
                idx = i;
            }
        }
        if(min_ans == INT_MAX){
            return-1;
        }
        return idx;
        ;
    }
};