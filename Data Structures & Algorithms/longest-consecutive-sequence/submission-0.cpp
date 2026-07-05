class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Handle empty array edge case
        if (nums.empty()) return 0;

        std::set<int> s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }

        // 'count' will store our global maximum streak
        int count = 1; 
        int current_streak = 1;

        // Start an iterator at the second element, and track the previous element
        auto it = s.begin();
        int prev = *it; 
        it++; // Move to the second element

        // Loop through the rest of the set using your iterator
        while (it != s.end()) {
            int curr = *it;

            if (curr == prev + 1) {
                // The sequence is consecutive (e.g., 2 followed by 3)
                current_streak++;
            } else {
                // The chain broke! Save the longest streak seen so far
                count = std::max(count, current_streak);
                current_streak = 1; // Reset for the next sequence
            }

            prev = curr; // Move our 'prev' tracker forward
            it++;        // Move iterator forward
        }

        // One final check in case the longest sequence went all the way to the end
        return std::max(count, current_streak); 
    }
};