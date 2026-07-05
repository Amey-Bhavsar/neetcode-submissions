class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size()); 
        vector<int> prefix(nums.size()); 
        vector<int> suffix(nums.size()); 
        //first prefix sum
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                prefix[i] = 1; 
                continue;
            }
            prefix[i] = nums[i -1] * prefix[i-1];
        }
        //suffix sum 
        for(int j = nums.size()- 1; j >= 0; j--){
            if(j == nums.size() - 1){
                suffix[j] = 1;
                continue;
            }
            suffix[j] = suffix[j+1] * nums[j+1];
        }
        //ans array
        for(int k = 0; k < output.size(); k++){
            output[k] = prefix[k] * suffix[k];
        }
        return output; 
    } 
};
