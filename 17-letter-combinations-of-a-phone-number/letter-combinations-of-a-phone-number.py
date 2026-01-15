class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        maps = {
            '2': ['a', 'b', 'c'],
            '3': ['d', 'e', 'f'],
            '4': ['g', 'h', 'i'],
            '5': ['j', 'k', 'l'],
            '6': ['m', 'n', 'o'],
            '7': ['p', 'q', 'r', 's'],
            '8': ['t', 'u', 'v'],
            '9': ['w', 'x', 'y', 'z']
        }
        lst = []
        def backtrack(index, path):
            if index == len(digits):
                lst.append(''.join(path))
                return
            for ch in maps[digits[index]]:
                path.append(ch)
                backtrack(index+1, path)
                path.pop()
        backtrack(0, [])
        return lst

