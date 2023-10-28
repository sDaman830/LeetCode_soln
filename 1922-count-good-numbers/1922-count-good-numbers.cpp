class Solution {
public:
    #define mod1 1000000007
        int mul(long long a, long long b)
{
    return (a % mod1) * (b % mod1) % mod1;
}
    
  long long power(long long x, long long n) {
        if (n == 0) return 1;
        if (n % 2 == 0) {
            long long halfpow = power(x, n / 2);
            return mul(halfpow, halfpow);
        } else {
            return mul(x, power(x, n - 1));
        }
    }
    int countGoodNumbers(long long n) {
        long long odd =0;
            long long even = 0;
        
        if(n == 1) return 5;
        else{
         odd = power(4,n/2);
           even = power(5,(n/2)+n%2);
          
        }
        return mul(odd,even);

    }
};