class Solution {
    
    private final long MOD = 1_000_000_007; 

    public int countGoodNumbers(long n) {
        long evenIdx = (n + 1) / 2;
        long oddIdx = n / 2;
        long evenCalc = power(5, evenIdx);
        long oddCalc = power(4, oddIdx);
        return (int) ((evenCalc * oddCalc) % MOD);
    }

    public long power(long base, long exp) {
        if (exp == 0) {
            return 1;
        }

        long halfPower = power(base, exp / 2);
        long halfPowerSquared = (halfPower * halfPower) % MOD;

        if (exp % 2 != 0) {
            return (halfPowerSquared * base) % MOD;
        }

        return halfPowerSquared;
    }
}