class Solution {
typedef long long ll;
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        ll curr_sum = 0;
        multiset<int> low, high;
        int target_count = k - 1;
    
        for(int i = 1; i <= dist + 1 && i < n; i++){
            low.insert(nums[i]);
            curr_sum += nums[i];
        }
        
        while(low.size() > target_count){
            auto it = prev(low.end());
            curr_sum -= *it;
            high.insert(*it);
            low.erase(it);
        }
        
        ll min_total_cost = nums[0] + curr_sum;
        
        // Slide the window
        for(int i = dist + 2; i < n; i++){
            // Remove element leaving the window
            int out_val = nums[i - dist - 1];
            auto it = low.find(out_val);
            if(it != low.end()){
                curr_sum -= out_val;
                low.erase(it);
            } else {
                high.erase(high.find(out_val));
            }
            
            // Add new element
            int new_val = nums[i];
            if(low.size() < target_count || (high.empty() || new_val <= *prev(low.end()))){
                low.insert(new_val);
                curr_sum += new_val;
            } else {
                high.insert(new_val);
            }
            
            // Rebalance: move largest from low to high if needed
            while(low.size() > target_count){
                auto it_max = prev(low.end());
                curr_sum -= *it_max;
                high.insert(*it_max);
                low.erase(it_max);
            }
            
            // Rebalance: move smallest from high to low if needed
            while(low.size() < target_count && !high.empty()){
                auto it_min = high.begin();
                curr_sum += *it_min;
                low.insert(*it_min);
                high.erase(it_min);
            }
            while(!low.empty() && !high.empty() && *prev(low.end()) > *high.begin()){
                auto max_low = prev(low.end());
                auto min_high = high.begin();
                
                curr_sum -= *max_low;
                curr_sum += *min_high;
                
                high.insert(*max_low);
                low.insert(*min_high);
                low.erase(max_low);
                high.erase(min_high);
            }
            
            min_total_cost = min(min_total_cost, nums[0] + curr_sum);
        }
        
        return min_total_cost;
    }
};