class Solution {
public:
    void removeSenator(string& senate, char ch, int idx) {
        while (true) {
            if (senate[idx] == ch) {
                senate[idx] = 'O';
                break;
            }
            idx = (idx + 1) % senate.length();
        }
    }
    int n;
    string predictPartyVictory(string senate) {
        n = senate.length();
        int r_count = 0;
        int d_count = 0;

        for (int i = 0; i < senate.length(); i++) {
            if (senate[i] == 'R')
                r_count++;
            else
                d_count++;
        }
        int idx = 0;
        while (r_count > 0 && d_count > 0) {
            if (senate[idx] == 'R') {
                removeSenator(senate, 'D', (idx + 1) % (senate.length()));
                d_count--;
            }

            else if(senate[idx] == 'D') {
                removeSenator(senate, 'R', (idx + 1) % (senate.length()));
                r_count--;
            }
            idx = (idx + 1) % senate.length();
        }
        if (r_count == 0) {
            return "Dire";
        } else {
            return "Radiant";
        }
    }
};