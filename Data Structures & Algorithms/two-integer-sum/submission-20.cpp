/* Clarifying Questions: 
    - No input, other than integer
    - Time complexity : Best 

    Optimal Approach: 
        - Traverse through the vector of integers
        - and store everytihing into an unorder_map<element, index> 
        - 
*/ 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> count; 
        for (int i = 0; i < nums.size(); i++){
            count[nums[i]] = i;
        }

        int complement = 0; 
        for (int i = 0; i < nums.size(); i++){
            complement = target - nums[i]; 
            if (count.find(complement) != count.end()){
                if (count[complement] != i){
                    return {i, count[complement]}; 
                }
            }
        }
        return {0, 0}; 
    }
};
