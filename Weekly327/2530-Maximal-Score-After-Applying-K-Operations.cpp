class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i : nums) pq.push(i);
        long long ans = 0;
        while(k--) {
            int a = pq.top();
            ans += a;
            pq.pop();
            pq.push(ceil((double)a / 3));
        }
        return ans;
    }
};