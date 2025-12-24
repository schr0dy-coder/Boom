class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        capacity.sort(reverse = True)
        total_apple = sum(apple)
        c = 0
        s = 0
        for i in capacity:
            s+=i
            c+=1
            if s>=total_apple:
                return c