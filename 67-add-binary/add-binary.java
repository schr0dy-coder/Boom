class Solution {
    public String addBinary(String a, String b) {
        StringBuilder ans = new StringBuilder();
        int carry = 0;
        char [] arr1 = a.toCharArray();
        char [] arr2 = b.toCharArray();
        int n = arr1.length-1;
        int m = arr2.length-1;
        while(n>=0 || m>=0 || carry!=0){
            int sum = carry;
            if (n >= 0) sum += arr1[n--] - '0';
            if (m >= 0) sum += arr2[m--] - '0';
            ans.append(sum % 2);
            carry = sum / 2;
        }
        return ans.reverse().toString();
    }
}