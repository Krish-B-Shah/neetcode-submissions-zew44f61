class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        unordered_map <int, int> indices; 
        for (int i = 0; i < n; i++){
            int value = nums[i]; 
            indices[value] = i;
        }

        for (int i = 0; i < n; i++){
            int complement = target - nums[i]; 
            if (indices.count(complement)){
                int j = indices[complement];
                if (i != j){
                    return {i, j};
                } 
            }
        }

        return {}; 


    }
};
