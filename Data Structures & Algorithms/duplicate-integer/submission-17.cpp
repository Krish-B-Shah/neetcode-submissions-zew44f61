class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // We just have check if there any duplicates
        set<int> unique (nums.begin(), nums.end()); 
        if (unique.size() < nums.size()) return true; 
        return false; 
    }
};


// First approach: 
    // I go through loop put each element in a set or in a array and check with that if its present or not. 
    // The other way is put it in a set and compare two lengths. 