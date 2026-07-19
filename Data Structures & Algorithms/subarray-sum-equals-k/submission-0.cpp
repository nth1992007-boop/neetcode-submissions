class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result = 0;

        for(int i = 0; i < nums.size(); i++){
            int sum = nums[i];

            for(int j = i; j < nums.size(); j++){
                if(sum == k){
                    result++;
                }
                if(j + 1 < nums.size()){
                    sum += nums[j + 1];
                }

            }
        }
        return result;
    }
};