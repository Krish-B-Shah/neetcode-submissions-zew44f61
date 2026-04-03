class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int i = 0; 
     int complement = target - nums[i]; 
     while (i < nums.size()) {
        for (int j = i+1; j<nums.size(); j++){
            if (nums[j] == complement){
                return {i, j}; 
            }

            
        }
        i++; 
        complement = target - nums[i]; 
     }
     return {-1}; 
    }
};
