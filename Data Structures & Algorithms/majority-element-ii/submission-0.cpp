class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        unordered_map<int,int> map;

        for(int x : nums){
            map[x]++;

            if(map[x] == n/3 + 1){
                ans.push_back(x);
            }
        }
        return ans;
    }
};