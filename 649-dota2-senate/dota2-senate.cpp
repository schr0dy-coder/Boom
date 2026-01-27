class Solution {
public:
    bool removeSenator(string& senate, char ch, int idx) {
        bool checkRemove = false;
        while (true) {
            if (idx == 0)
                checkRemove = true;
            if (senate[idx] == ch) {
                senate.erase(begin(senate) + idx);
                break;
            }
            idx = (idx + 1) % senate.length();
        }
        return checkRemove;
    }
    string predictPartyVictory(string senate) {
        char s = senate[0];
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
                bool checkRemoval =
                    removeSenator(senate, 'D', (idx + 1) % (senate.length()));
                d_count--;
                if (checkRemoval)
                    idx--;
            }

            else {
                bool checkRemoval =
                    removeSenator(senate, 'R', (idx + 1) % (senate.length()));
                r_count--;
                if (checkRemoval)
                    idx--;
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