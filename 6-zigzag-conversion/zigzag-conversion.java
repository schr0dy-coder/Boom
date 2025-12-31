class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1) return s;
        StringBuilder[] arr = new StringBuilder[numRows];
        for(int i = 0; i<arr.length; i++)
            arr[i] = new StringBuilder();
        int k = 0;
        boolean down = false;
        for(int i = 0; i<s.length(); i++){
            arr[k].append(s.charAt(i));
            if(k==0|| k == numRows-1)
                down = !down;
            k+=down?1:-1;
        }
        StringBuilder result = new StringBuilder();
        for(StringBuilder r : arr)
            result.append(r);
        return result.toString();
    }
}