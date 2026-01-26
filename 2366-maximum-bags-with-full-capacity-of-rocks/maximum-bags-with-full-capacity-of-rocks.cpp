class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> diff;
        int full_bags = 0;
        for(int i = 0; i<n; i++){
            int diff_rocks = capacity[i] - rocks[i];
            if(diff_rocks == 0){
                full_bags++;
            }
            else{
                diff.push_back(diff_rocks);
            }
        }
        sort(diff.begin(), diff.end());
        for(int need : diff){
            if(additionalRocks >= need){
                additionalRocks -= need;
                full_bags++;
            }
            else{
                break;
            }
        }
        return full_bags;
    }
};