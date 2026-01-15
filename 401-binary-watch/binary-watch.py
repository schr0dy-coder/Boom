class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        lst = []
        for hour in range(12):
            for min in range(60):
                if bin(hour).count('1') + bin(min).count('1') == turnedOn:
                    lst.append(f'{hour}:{min:02d}')
        return lst