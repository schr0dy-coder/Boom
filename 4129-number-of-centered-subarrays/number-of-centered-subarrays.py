class Solution(object):
    def centeredSubarrays(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        for l in range(len(nums)):
            set_num = set()
            for r in range(l, len(nums)):
                set_num.add(nums[r])
                if sum(nums[l:r+1]) in set_num:
                    count+=1
        return count
        