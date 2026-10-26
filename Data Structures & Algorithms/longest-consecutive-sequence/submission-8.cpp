class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s; 
        for (auto& i: nums){
            s.insert(i); 
        }        


        sort(nums.begin(), nums.end()); 
        int result = 0; 
        int res = 1;
        for (int i = 0; i < nums.size(); i++){
            if ((i + 1 < nums.size()) && (nums[i + 1] == nums[i])) continue; 
            if (s.find(nums[i] + 1) != s.end()){
                res++; 
            }
            else{
                res = 1; 
            }
            result = max(result, res); 
        }
        return result; 
    }
};
