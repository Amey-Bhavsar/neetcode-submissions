class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2 * nums.size());
        //initially just copying of elements into array
        for(int i = 0; i < nums.size(); i++){
            ans[i] = nums[i];
        }
        for(int j = 0; j < nums.size(); j++){
            ans[nums.size() + j] = nums[j];
        }
        return ans;

    }
};