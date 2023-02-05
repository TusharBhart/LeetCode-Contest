class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        unordered_set<char> s = {'a', 'e', 'i', 'o', 'u'};
        vector<int> ans, ps(n);
        
        for(int i=0; i<n; i++) {
           if(s.find(words[i][0]) != s.end() && s.find(words[i].back()) != s.end()) ps[i]++;
        }
        for(int i=1; i<n; i++) ps[i] += ps[i - 1];
        ps.insert(ps.begin(), 0);
        
        for(auto q : queries) {
            ans.push_back(ps[q[1] + 1] - ps[q[0]]);
        }
        return ans;
    }
};
