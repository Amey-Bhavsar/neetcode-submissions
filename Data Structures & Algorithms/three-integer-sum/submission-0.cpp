class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> s;
        sort(nums.begin() , nums.end()); 
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int target = -1 * nums[i];
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                if(nums[left] + nums[right] == target){
                    s.push_back({nums[i] ,nums[left], nums[right] }); 
                    left++; 
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                        left++;

                    while(left < right && nums[right] == nums[right+1])
                        right--;
                    continue; 
                }
                if(nums[left] + nums[right] > target){
                    right--;
                }
                if(nums[left] + nums[right] < target){
                    left++;
                }
            }
        }
        
        
        return s; 
    }
};
