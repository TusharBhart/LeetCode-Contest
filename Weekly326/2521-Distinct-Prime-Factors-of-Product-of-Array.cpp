class Solution {
    void solve(int n, unordered_set<int> &s) {
        for(int i=2; i<=sqrt(n); i++) {
            while(n % i == 0) s.insert(i), n /= i;
        }
        if(n > 1) s.insert(n);
    }
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums) solve(i, s);
        return s.size();
    }
};