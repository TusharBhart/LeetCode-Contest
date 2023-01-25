class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n = nums1.size(), inc = 0, dec = 0;
        if(!k) {
            for(int i=0; i<n; i++) {
                if(nums1[i] != nums2[i]) return -1;
            }
            return 0;
        }
        
        for(int i=0; i<n; i++) {
            if(nums1[i] > nums2[i]) {
                if((nums1[i] - nums2[i]) % k) return -1;
                dec += nums1[i] - nums2[i];
            }
            else if(nums1[i] < nums2[i]) {
                if((nums2[i] - nums1[i]) % k) return -1;
                inc += nums2[i] - nums1[i];
            }
        }
        return inc != dec ? -1 : inc / k;
    }
};
