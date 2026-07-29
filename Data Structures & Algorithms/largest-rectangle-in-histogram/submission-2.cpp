class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area = 0;
        int max_height = 0;

        for(int height : heights){
            max_height = max(max_height, height);
        }

        for(int current_height = 1; current_height <= max_height; current_height++){
            int current_area = 0;

            for(int j = 0; j < heights.size(); j++){
                if(heights[j] >= current_height){
                    current_area += current_height;
                    max_area = max(max_area, current_area);
                }else{
                    current_area = 0;
                }
            }
        }
        return max_area;
    }
};
