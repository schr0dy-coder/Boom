class Solution(object):
    def romanToInt(self, s):
        dict1 = {'I': 1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        lst = [dict1[c] for c in s]
        result = 0
        sub = 0
        for i in range (len(lst)):
            if i == len(lst) -1:
                result += lst[i]-sub
            else:
                if lst[i] < lst[i+1]:
                    sub = lst[i]
                else:
                    result+=lst[i]-sub
                    sub = 0
        return result

        