class Solution {
    public int strStr(String haystack, String needle) {
        if(needle.length() > haystack.length()){
            return -1;
        }
        if(haystack.equals(needle))
            return 0;
        for(int i = 0; i<haystack.length() - needle.length()+1; i++){
            if(haystack.charAt(i) == needle.charAt(0)){
                boolean found = false;
                for(int j = 0; j<needle.length(); j++){
                    if(haystack.charAt(i+j) != needle.charAt(j))
                        break;
                    if(j == needle.length()-1)
                        return i;
                }
            }
        }
        return -1;
    }
}