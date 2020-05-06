class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        for(int i = 0; i < nums1.size(); i++) {
            vector<int>::iterator index = find(nums2.begin(), nums2.end(), nums1[i]);
            bool no = true;
            for(int j = index - nums2.begin(); j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    result.push_back(nums2[j]);
                    no = false;
                    break;
                }
            }
            if(no) result.push_back(-1);
        }
        
        return result;
        
    }
};
