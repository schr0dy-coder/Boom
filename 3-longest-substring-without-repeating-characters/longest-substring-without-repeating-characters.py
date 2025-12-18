class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        c_set = set()
        l = 0
        max_len = 0
        for r in range(len(s)):
            while s[r] in c_set:
                c_set.remove(s[l])
                l+=1
            c_set.add(s[r])
            max_len = max(max_len, r-l+1)
        return max_len