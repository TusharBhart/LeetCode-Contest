class Solution {
    bool good(int x, vector<int> &nums, int k) {
        int cnt = 0, n = nums.size(), i = 0;
        while(i < n) {
            if(nums[i] <= x) cnt++, i += 2;
            else i++;
        }
        return cnt >= k;
    }
public:
    int minCapability(vector<int>& nums, int k) {
        int s = 0, e = 1e9, ans = INT_MAX;
        while(s <= e) {
            int m = (s + e) / 2;
            if(good(m, nums, k)) e = m - 1, ans = m;
            else s = m + 1;
        }
        return ans;
    }
};