class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for(auto& x : nums){
            unordered_set <int> divisors;
            for(int i  =1; i*i <=x; i++){
                if(x%i == 0){
                    divisors.insert(i);
                    divisors.insert(x/i);
                }
                if(divisors.size() > 4) break;
            }
            if(divisors.size() == 4){
                for(int d : divisors)
                    total+=d;
            }
        }
        return total;
    }
};