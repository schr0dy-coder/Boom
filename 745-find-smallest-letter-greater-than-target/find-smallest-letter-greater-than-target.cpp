class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char min_letter = '{';
        for(int i = 0; i<letters.size(); i++){
            if(letters[i] > target)
                min_letter = min(letters[i], min_letter);
        }
        if(min_letter == '{')
            return min_letter = letters[0];
        return min_letter;
    }
};