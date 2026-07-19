class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int x : nums2){
            nums1[m] = x;
            m++;
        }
        sort(nums1.begin(), nums1.end());
    }
};