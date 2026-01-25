class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        reverse(people.begin(), people.end());
        int i = 0;
        int j = n-1;
        int boats = 0;
        while(i<=j){
            int total_weight = people[i] + people[j];
            if(total_weight <= limit){
                boats++;
                i++;
                j--;
            }
            else{
                boats++;
                i++;
            }
        }
        return boats;
    }
};