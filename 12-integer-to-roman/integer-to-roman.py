class Solution:
    def intToRoman(self, num: int) -> str:
        s= str(num)
        l = len(s)-1
        dic = {'I' : 1, 'V' : 5, 'X' : 10, 'L':50, 'C':100, 'D':500, 'M':1000}
        s = ''
        digits = [int(d) for d in str(num)]
        for d in digits:
            if l == 3 and d<4:
                for i  in range(d):
                    s+='M'
                l-=1
            elif l == 2:
                if d < 4:
                    for i  in range(d):
                        s+='C'
                elif d == 4:
                    s+='CD'
                elif d == 5:
                    s+='D'
                elif d < 9:
                    s+='D'
                    d = d-5
                    for i in range(d):
                        s+='C'
                else:
                    s+='CM'
                l-=1
            elif l == 1:
                if d < 4:
                    for i  in range(d):
                        s+='X'
                elif d == 4:
                    s+='XL'
                elif d == 5:
                    s+='L'
                elif d < 9:
                    s+='L'
                    d = d-5
                    for i in range(d):
                        s+='X'
                else:
                    s+='XC'
                l-=1
            elif l == 0:
                if d < 4:
                    for i  in range(d):
                        s+='I'
                elif d == 4:
                    s+='IV'
                elif d == 5:
                    s+='V'
                elif d < 9:
                    s+='V'
                    d = d-5
                    for i in range(d):
                        s+='I'
                else:
                    s+='IX'
                l-=1

        return s


