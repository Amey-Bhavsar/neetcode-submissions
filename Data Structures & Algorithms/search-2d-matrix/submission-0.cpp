class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0 , btm = matrix.size() - 1;
        int row = matrix.size() , col = matrix[0].size();
        while(top <= btm){
            int mid = top - ((top - btm) / 2 );
            if(matrix[mid][col - 1]  < target){
                top = mid + 1;
                continue;
            }
            if(matrix[mid][0] > target){
                btm = mid - 1;
                continue; 
            }
            if(matrix[mid][0] <= target && matrix[mid][col -1] >= target){
                int left = 0 , right = col - 1; 
                while(left <= right){
                    int mid1 = right - ((right - left)/ 2);
                    if(matrix[mid][mid1] == target){
                        return true; 
                    }
                    if(matrix[mid][mid1] > target){
                        right = mid1 -1 ;
                        continue; 
                    }
                    if(matrix[mid][mid1] < target){
                        left = mid1 + 1 ;
                        continue; 
                    }
                }
                return false; 
            }
        }
        return false; 
    }
};
