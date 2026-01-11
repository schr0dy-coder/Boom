class Solution(object):
    def residuePrefixes(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        sd = set()
        for r in range(len(s)):
            sd.add(s[r])
            if(len(s[:r+1]) % 3 == len(sd)):
                count+=1
        return count

        