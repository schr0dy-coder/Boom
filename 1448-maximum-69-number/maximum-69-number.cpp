class Solution {
public:
    int maximum69Number (int num) {
        string num2 = to_string(num);
        for(int i = 0; i<num2.size(); i++){
            if(num2[i] == '6'){
                num2[i] = '9';
                break;
            }
        }
        return stoi(num2);
    }
};