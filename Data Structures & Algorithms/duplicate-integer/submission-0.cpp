class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //cannot use nested for loops 
        unordered_map<int , int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.count(nums[i]) == 1){
                return true;
                break; 
            }
            else{
                s.insert({nums[i], 0});
            }
        }
        return false; 
    }
};