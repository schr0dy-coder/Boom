class Solution {
public:
    bool winnerOfGame(string colors) {
        int bob_step = 0;
        int alice_step = 0;
        for(int i = 1; i<colors.size()-1; i++){
            if(colors[i] == 'A' && colors[i+1] == 'A' && colors[i-1]=='A')
                alice_step++;
            if(colors[i] == 'B' && colors[i+1] == 'B' && colors[i-1]=='B')
                bob_step++;
        }
        return alice_step > bob_step;
    }
};