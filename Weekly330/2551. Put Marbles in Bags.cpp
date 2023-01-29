class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long n = weights.size(), mx = weights[0] + weights[n - 1], mn = weights[0] + weights[n - 1];
        vector<int> cuts;
        for(int i=1; i<n; i++) cuts.push_back(weights[i - 1] + weights[i]);
        sort(cuts.begin(), cuts.end());
        
        for(int i=0; i<k-1; i++) {
            mx += cuts[cuts.size() - 1 - i];
            mn += cuts[i];
        }
        return mx - mn;
    }
};