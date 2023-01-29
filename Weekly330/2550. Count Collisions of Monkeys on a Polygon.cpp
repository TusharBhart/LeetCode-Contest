class Solution {
public:
    int monkeyMove(int p) {
        long long ans = 1, b = 2, mod = 1e9 + 7;
        while(p) {
            if(p % 2) ans = (ans * b) % mod;
            b = (b * b) % mod;
            p /= 2;
        }
        return ans - 2 < 0 ? ans - 2 + mod : ans - 2;
    }
};