class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     unordered_set<int> seen; // o(1) 

    //     for (int i: nums){ // o(n)
    //         if (seen.count(i)) return true; // o(n)
    //         seen.insert(i); 
    //     }
    //     return false; 
         for (int i = 0; i < nums.size(); i++){
        for (int j = i + 1; j< nums.size(); j++){
            if (nums[i] == nums[j]) return true; 
        }
    }
    return false; 

    }
};


// Brute force: 

   