class Solution:
    def numberOfStableArrays(self, z: int, o: int, l: int) -> int:
        f = cache(lambda q,p:q<1>p or sum(f(p,q-k) for k in range(1,min(l,q)+1)))
        return (f(z,o)+f(o,z))%(10**9+7)