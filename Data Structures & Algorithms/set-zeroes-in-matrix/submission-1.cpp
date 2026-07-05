class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;

        int numRows = matrix.size();
        int numCols = matrix[0].size();

        unordered_set<int> r, c; 

        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < numCols; j++){
                if(matrix[i][j] != 0){
                    continue; 
                }
                else{ 
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        
        for(int i = 0; i < numRows; i++){
            if(r.count(i) == 1){
                matrix[i] = vector<int>(numCols, 0);
            }
        }
        
        for(int i = 0; i < numCols; i++){
            if(c.count(i) == 1){
                for(int j = 0; j < numRows; j++){
                    matrix[j][i] = 0; 
                }
            }
        }
    }
};