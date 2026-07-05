class Solution {
public:
    vector<int>reverseArray(vector<int>&nums){
        int left = 0 , right = nums.size() - 1;
        while(left<right){
            int helper = nums[left];
            nums[left] = nums[right];
            nums[right] = helper; 
            left++;
            right--;
        }
        return nums; 
    }

    void rotate(vector<vector<int>>& matrix) {
        //first transpose
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0 + i; j < matrix.size(); j++){
                if(i == j) continue; 
                int helper = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = helper; 
            }
        }
        //now reverse the rows
        for(int k = 0; k < matrix.size(); k++){
            matrix[k] = reverseArray(matrix[k]);
        }
        
    }
};
