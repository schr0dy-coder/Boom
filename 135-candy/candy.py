class Solution:
    def candy(self, A: List[int]) -> int:
        n = len(A)
        data = sorted((x,i) for i,x in enumerate(A))
        candies = [1]*n
        for _,i in data:
            if i>0 and A[i] > A[i-1]:
                candies[i] = max(candies[i], candies[i-1]+1)
            if i<n-1 and A[i] > A[i+1]:
                candies[i] = max(candies[i], candies[i+1]+1)
        return sum(candies)