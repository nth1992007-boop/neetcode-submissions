class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLength = nums.size() + 1;
        int windowSum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            windowSum += nums[right];

            while (windowSum >= target) {
                minLength = min(minLength, right - left + 1);

                windowSum -= nums[left];
                left++;
            }
        }

        return minLength == nums.size() + 1 ? 0 : minLength;
    }
};