class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map

        unordered_map<int, int> map; 
        int complement = 0; 
        for (int i = 0; i<nums.size(); i++){
            complement = target - nums[i]; 

            if (map.find(complement) != map.end()){
                if (i > map[complement]){
                return {map[complement], i}; 
                }
                else{
                    return {i, map[complement]}; 
                }
            }
            else{
                map[nums[i]] = i;  
            }
        }
        return {0, 0};
    }
};
