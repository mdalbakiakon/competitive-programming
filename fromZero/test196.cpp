class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vec;
        for(int i=0; i<m; i++) vec.push_back(nums1[i]);
        for(int i=0; i<n; i++) vec.push_back(nums2[i]);
        sort(vec.begin(), vec.end());
        nums1 = vec;
    }
};