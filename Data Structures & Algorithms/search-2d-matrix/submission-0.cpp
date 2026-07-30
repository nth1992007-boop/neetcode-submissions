class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int rows = matrix.size();
       int columns = matrix[0].size();

       int left = 0;
       int right = rows * columns - 1;

       while(left <= right){
        int mid = left + (right - left) / 2;

        int row = mid / columns;
        int column = mid % columns;

        int current = matrix[row][column];

        if(current == target){
            return true;
        }

        if(current > target){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
       }
       return false; 
    }
};
