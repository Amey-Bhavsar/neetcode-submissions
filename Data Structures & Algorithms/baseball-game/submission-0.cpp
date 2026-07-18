class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score , idx = 0; 
        vector<int>record;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i][0] == '+'){
                record.push_back(record[idx - 1] + record[idx - 2])  ;
                idx++;
                continue;
            }
            if(operations[i][0] == 'D'){
                record.push_back( 2 * record[idx - 1]);
                idx++;
                continue;
            }
            if(operations[i][0] == 'C'){
                record.pop_back();
                idx--;
                continue;
            }
            else{
                int num = stoi(operations[i]);
                record.push_back(num) ;
                idx++;
                continue; 
            }
        }
        return accumulate(record.begin() , record.end() , 0);
    }
};