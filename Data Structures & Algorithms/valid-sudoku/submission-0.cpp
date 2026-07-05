class Solution {
public:
    bool check3x3(vector<vector<char>>& myboard , int i , int j ){
        unordered_set<char> t;
        for(int z = 0; z <=2; z++){
            for(int h = 0; h <= 2; h++){
                if(myboard[i + z][j + h] == '.'){
                    continue;
                }
                else{
                    if(t.count(myboard[i + z][j + h]) == 0){
                        t.insert(myboard[i + z][j + h]);
                    }
                    else return false;
                }
            }
        }
        return true; 
    }



    bool isValidSudoku(vector<vector<char>>& board) {
        //for row
        for(int i = 0; i < board.size(); i++){
            unordered_set<char> r; 
            for(int j = 0; j < board[i].size(); j++ ){
                if(board[i][j] == '.'){
                    continue;
                }
                else{
                    if(r.count(board[i][j]) == 0){
                        r.insert(board[i][j]);
                    }
                    else return false;
                }
            }
        }
        //for column
        for(int k = 0; k < board[0].size(); k++){
            unordered_set<char> c;
            for(int l = 0; l < board.size(); l++){
                if(board[l][k] == '.'){
                    continue;
                }
                else{
                    if(c.count(board[l][k]) == 0){
                        c.insert(board[l][k]);
                    }
                    else return false; 
                }
            }
        }
        //for 3x3 column 
        for(int q = 0 ; q <= 6; q = q + 3){
            for(int w = 0; w <= 6; w = w + 3){
                bool check = check3x3(board , q , w);
                if(!check){
                    return false;
                }
            }
        }
        

        return true; 
    }
};
