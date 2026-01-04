class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        int lastInd = 0;
        for(int i = s.length() - 1; i>=0; i--){
            if(s.charAt(i) == ' '){
                lastInd = i+1;
                break;
            }
        }
        return s.substring(lastInd, s.length()).length();
    }
}