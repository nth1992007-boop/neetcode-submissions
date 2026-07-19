class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;

        // Đếm số lần xuất hiện
        for(int number : nums){
            frequency[number]++;
        }

        vector<pair<int, int>> elements;

        // Lưu {tần suất, giá trị}
        for(auto item : frequency){
            elements.push_back({item.second, item.first});
        }

        // Sắp xếp giảm dần theo tần suất
        sort(elements.rbegin(), elements.rend());

        vector<int> answer;

        // Lấy k phần tử đầu tiên
        for(int i = 0; i < k; i++){
            answer.push_back(elements[i].second);
        }

        return answer;
    }
};