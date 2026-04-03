class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Approach: 
            // - Since we have to find the indices we should track both the keys and values, thus the hash map must be the optimal way to solve this problem. 
        unordered_map<int, int> val;
        int complement = 0;  
        for(int i = 0; i<nums.size(); i++){
            complement = target - nums[i]; 
            if (val.count(complement)){
                return {val[complement], i}; 
            }
            else{
                val[nums[i]] = i; 
            }
        } 
        return {}; 
     
    }
};
