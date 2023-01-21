class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n = nums1.size(), inc = 0, dec = 0;
        for(int i=0; i<n; i++) {
            if(nums1[i] > nums2[i]) dec += nums1[i] - nums2[i];
            else if(nums1[i] < nums2[i]) inc += nums2[i] - nums1[i];
        }
        if(inc != dec) return -1;
        if(!k) {
            if(!inc) return 0;
            return -1;
        }  
        if(inc % k == 0) return inc / k;
        return -1;
    }
};