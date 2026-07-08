class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        //firstly brute force or i will forget that
        for(int i = 0; i < temperatures.size(); i++){
            if(i == temperatures.size() - 1){
                result.push_back(0);
                continue;
            }
            int count = 1 ; 
            for(int j = i + 1; j < temperatures.size(); j++){
                if(temperatures[j] <= temperatures[i] && j !=temperatures.size() - 1 ){
                    count++; 
                    continue;
                }
                if(temperatures[j] <= temperatures[i] && j ==temperatures.size() - 1 ){
                    count = 0;
                }
                else{
                    break; 
                }
            }
            result.push_back(count);
        }
        return result;
    }
};
