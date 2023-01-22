class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int p = s.size() % 2 ? 1 : 0, ans = 0;
        
        while(n) {
            ans += p? +n % 10 : -n % 10;
            n /= 10;
            p = !p;
        }
        return ans;
    }
};