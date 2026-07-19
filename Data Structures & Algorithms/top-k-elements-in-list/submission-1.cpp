class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        constexpr int OFFSET = 1000;
        constexpr int RANGE = 2001;

        int frequency[RANGE] = {};

        // Đếm tần suất trực tiếp
        for (int x : nums) {
            ++frequency[x + OFFSET];
        }

        int n = nums.size();

        // head[f] là phần tử đầu tiên có tần suất f
        vector<int> head(n + 1, -1);

        // next[i] nối các giá trị có cùng tần suất
        int next[RANGE];

        for (int i = 0; i < RANGE; ++i) {
            if (frequency[i] > 0) {
                int f = frequency[i];

                next[i] = head[f];
                head[f] = i;
            }
        }

        vector<int> answer;
        answer.reserve(k);

        // Duyệt từ tần suất lớn nhất xuống
        for (int f = n; f >= 1; --f) {
            for (int i = head[f]; i != -1; i = next[i]) {
                answer.push_back(i - OFFSET);

                if (answer.size() == k) {
                    return answer;
                }
            }
        }

        return answer;
    }
};