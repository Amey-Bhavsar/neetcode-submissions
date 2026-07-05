class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //clearly can be solved using O(n2)
        vector<int> ans; 
        unordered_map<int , int>s;
        for(int i = 0; i < nums.size(); i++){
            if(s.count(nums[i]) == 1 && 2 * nums[i] == target){
                ans.push_back(s[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            s.insert({nums[i] , i});
        }
        for(int j = 0; j < nums.size(); j++){
            int t1 = target - nums[j];
            if(s.count(t1) == 1 && s[t1] != j){
                ans.push_back(j);
                ans.push_back(s[t1]);
                break;
            }
        }
        return ans; 
    }
};
