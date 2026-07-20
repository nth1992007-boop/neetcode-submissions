class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;

        for(int left = 0; left < heights.size() - 1; left++){
            for(int right = left + 1; right < heights.size(); right++){
                int height = min(heights[left], heights[right]);
                int width = right - left;
                int area = height * width;

                result = max(area, result);
            }
        }

        return result;
    }
};
