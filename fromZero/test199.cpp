class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(int i=0; i<nums1.size(); i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            int index = it - nums2.begin();
            int next = -1;
            for(int j=index+1; j<nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    next = nums2[j];
                    break;
                }
            }
            vec.push_back(next);
        }

        return vec;
    }
};