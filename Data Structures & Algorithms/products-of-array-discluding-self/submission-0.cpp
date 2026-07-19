class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();
        int temp = 1;

        for(int i = 0; i < n; i++){
            int a = nums[i];
            nums[i] = temp;

            int result = 1;

            for(int j : nums){
                result *= j;
            }

            ans.push_back(result);
            nums[i] = a;
            temp = 1;
        }

        return ans;
    }
};
