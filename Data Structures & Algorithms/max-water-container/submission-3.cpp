/*
Clarifying questions: 
    - input: integer array
    - output: integer
    - Timecomplexity: Best optimal

Brute Force: 
    - Possible area for each element and store in a vector
    - and at the end just look for the maximum value and return it. 
    - Its highly time consuming and and not optimal

Optimal approach: 
    left = 0
    right = 2
    calculate the max area = 1 - 0 = 1 and the min height (1, 7) = 1 1 * 1 = 1
    we move left pointer only when the element is higher than the current elemen


*/






class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0; 
        int right = heights.size() - 1; 
        int max_area = 0; 
        while (left < right){
            int area = (right - left)*(min(heights[right], heights[left])); 
            max_area = max(area, max_area); 
            if (heights[right] > heights[left]){
                left ++; 
            }
            else{
                right--; 
            }
        }

        return max_area; 
    }
};
