class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> num; 
       for(auto& i: nums){
        num.insert(i); 
       }

       return nums.size() > num.size(); 
    }
};


// Approach 1 : 
    // Just compare length of a set of nums and length of the orignal array nums. 
    // o(n)
// Approach 2 : 
    // Brute force approach: 
        // - Go through each number and compare it to the remaining numbers in an array. 
        // O(n^2)
