class Solution {
public:
    array<int, 10> digit_frequencies(int x){
        array<int, 10> c{};
        do{
            c[x%10]++;
            x/=10;
        }
        while(x);
        return c;
    }
    bool isDigitorialPermutation(int n) {
        int factorials[10];
        factorials[0] = 1;
        for(int i = 1; i<10; i++)
            factorials[i] = factorials[i-1]*i;
        int digits_sum = 0, x= n;
        do{
            digits_sum += factorials[x%10];
            x/=10;
        }while(x);
        return digit_frequencies(digits_sum) == digit_frequencies(n);
    }

};