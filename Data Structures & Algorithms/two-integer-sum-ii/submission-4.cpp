class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> s; 
        int left = 0 , right = numbers.size() - 1 ; 
        while(true){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                s.push_back(left + 1);
                s.push_back(right + 1); 
                break; 
            }
            if(sum > target){
                right--; 
                continue;
            }
            if(sum < target){
                left++;
                continue;
            }
        }
        return s;
    }
};
