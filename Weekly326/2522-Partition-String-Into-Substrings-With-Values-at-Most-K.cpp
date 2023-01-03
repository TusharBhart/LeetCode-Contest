class Solution {
public:
    int minimumPartition(string s, int k) {
        int ans = 1, n = s.size();
        string str;
        for(int j=0; j<n; j++) {
            if(s[j] - '0' > k) return -1;
            str += s[j];
            if(stol(str) > k) str = s[j], ans++;
        }
        return ans;
    }
};
