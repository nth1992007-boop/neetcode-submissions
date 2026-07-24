class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int left1 = 0;


        for(int right = k - 1; right < nums.size(); right++){
            int max1 = INT_MIN;

            for(int left = left1; left <= right; left++){
                max1 = max(max1, nums[left]);
            }
            left1++;
            ans.push_back(max1);
        }

        return ans;
    }
};
