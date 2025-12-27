class Solution {
    public int myAtoi(String s) {
        s = s.trim();
        if(s.length() == 0) return 0;
        
        int i = 0;
        boolean neg = false;
        
        if(s.charAt(0) == '-'){
            neg = true;
            i = 1;
        } else if(s.charAt(0) == '+'){
            i = 1;
        }
        
        int result = 0;
        while(i < s.length() && Character.isDigit(s.charAt(i))){
            int digit = s.charAt(i) - '0';
            if(result > Integer.MAX_VALUE / 10 || 
               (result == Integer.MAX_VALUE / 10 && digit > 7)){
                return neg ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            }
            result = result * 10 + digit;
            i++;
        }
        
        return neg ? -result : result;
    }
}