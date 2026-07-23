class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = 100001;
        int sum = 0;

        int left =  0;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(sum >= target){
                int current = right - left + 1;
                ans = min(ans, current);

                sum -= nums[left];
                left++;
            }
        }
        if(ans == 100001){
            return 0;
        }else{
            return ans;
        }
    }
};