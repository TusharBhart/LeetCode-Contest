class Solution {
    vector<int> solve(int b) {
        if(b <= 2) return {};
        vector<int> v(b, 0);
        for(int i=2; i<=sqrt(b); i++) {
            if(!v[i]) {
                for(int j=i*i; j<b; j += i) v[j] = 1;
            }
        }
        return v;
    }
    
public:
    vector<int> closestPrimes(int left, int right) {
        if(left == 1) left++;
        vector<int> v, a, primes;
        v = solve(right + 1);
        for(int i=left; i<=right; i++) {
            if(!v[i]) primes.push_back(i);
        }
        
        if(primes.size() <= 1) return {-1, -1};
        
        int ans = 1e9;
        for(int i=1; i<primes.size(); i++) {
            if(primes[i] - primes[i - 1] < ans) ans = primes[i] - primes[i - 1], a = {primes[i - 1], primes[i]}; 
        }
        return a;
    }
};