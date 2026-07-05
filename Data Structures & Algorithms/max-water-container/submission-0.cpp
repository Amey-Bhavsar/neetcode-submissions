class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area , max_area = 0; 
        int start = 0 , end = heights.size() - 1; 
        while(start < end){
            area = (end - start) * min(heights[start], heights[end]); 
            if(area >= max_area){
                max_area = area; 
            }
            if(heights[start]>= heights[end]){
                end--;
            }
            if(heights[start]< heights[end]){
                start++;
            }
        }
        return max_area; 
    }
};
