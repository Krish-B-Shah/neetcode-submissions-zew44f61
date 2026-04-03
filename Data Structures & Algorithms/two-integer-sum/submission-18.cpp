class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i; 
        } 

        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i]; 
            if (mp.find(complement) != mp.end()){
                if (i != mp[complement]) {
                    return {i, mp[complement]};        
            }
        }
    }
        return {}; 
    
    }
};

// Approach 1: 
    // Using Hash maps, Indexes and values, maps are dictiopnary, which stores keys and values. 
    // Indexes          Values
        // 0                   3
        // 1                   4
        // 2                   5
        // 3                   6
    // 3 and target = 7
    //complement = 7 - 3 = 4
    // in the remaining array or map I will find if 4 exists
    // One more thing because we are returning indices then I would prefer storing them as values and storing the numbers as a key to better lookup. 
