using namespace std;
class Solution {
public:
    int maximumSum(vector<int>& nums) {
      vector<int> rem[3];
      for(int x : nums){
        rem[x%3].push_back(x);
      } 
      for(int i = 0; i<3; i++){
        sort(rem[i].rbegin(), rem[i].rend());
      } 
      int ans = 0;
      if(rem[0].size() >=3){
        ans = max(ans, rem[0][0] + rem[0][1] + rem[0][2]);
      }
      if(rem[1].size() >= 3){
        ans= max(ans, rem[1][0] + rem[1][1] + rem[1][2]);
      }
      if(rem[2].size() >= 3){
        ans = max(ans, rem[2][0] + rem[2][1] + rem[2][2]);
      }
      if(!rem[0].empty() && !rem[1].empty() && !rem[2].empty()){
        ans = max(ans, rem[0][0] + rem[1][0] + rem[2][0]);
      }
      return ans;
    }
};