class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int> pq(gifts.begin(), gifts.end());
        
        while(pq.size() && k--) {
            int a = pq.top(); pq.pop();
            pq.push(sqrt(a));
        }
  
        while(pq.size()) ans += pq.top(), pq.pop();
        return ans;
    }
};