class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m1, m2;
        for(int i : nums1) m1[i]++;
        for(int i : nums2) m2[i]++;
        
        for(auto i : m1) {
            if(m2.find(i.first) != m2.end()) return i.first;
        }
        return -1;
    }
};