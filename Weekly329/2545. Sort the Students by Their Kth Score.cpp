class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(auto &r : score) r.insert(r.begin(), r[k]);
        sort(score.begin(), score.end(), greater<vector<int>>());
        for(auto &r : score) r.erase(r.begin());
        return score;
    }
};