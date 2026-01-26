class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min_diff = INT_MAX;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i = 1; i<n; i++){
            min_diff = min(min_diff, arr[i]-arr[i-1]);
        }
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++){
            if(i<n-1 && arr[i+1]-arr[i] == min_diff){
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    }
};