class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[1])
        prev_s, prev_e = intervals[0]
        count = 1
        for s, e in intervals:
            if s< prev_e:
                pass
            else:
                prev_s, prev_e = s, e
                count+=1
        return len(intervals)-count