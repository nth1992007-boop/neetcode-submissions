class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int current = 0;
        int result = 0;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1]){
                continue;
            }

            if(nums[i] == nums[i + 1] - 1){
                current++;
                result = max(result, current);
            }else{
                current = 0;
            }
        }

        return result + 1;
    }
};