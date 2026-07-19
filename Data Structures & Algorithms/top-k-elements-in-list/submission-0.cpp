class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for(int x : nums){
            map[x]++;
        }
        
        vector<pair<int, int>> elements;

        for(auto x : map){
            elements.push_back({x.second, x.first});
        }

        sort(elements.rbegin(), elements.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back({elements[i].second});
        }

        return ans;
    }
};
