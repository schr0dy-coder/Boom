using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> freq;
        for(int x: nums) freq[x]++;
        int duplicates = 0;
        for(auto&[k,v] : freq){
            if(v>1) duplicates++;
        }
        if(duplicates == 0) return 0;
        int ops = 0;
        int index = 0;
        while(index < n && duplicates > 0){
            ops++;
            for(int i = 0; i<3 && index<n; i++){
                int x = nums[index++];
                freq[x]--;
                if(freq[x] == 1)
                    duplicates--;
            }
        }
        return ops;
    }
};