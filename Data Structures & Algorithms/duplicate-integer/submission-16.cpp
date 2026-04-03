class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
          return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};


// Brute force: 
   //     return false; 
    //      for (int i = 0; i < nums.size(); i++){ (o(n))
    //          for (int j = i + 1; j< nums.size(); j++){ (o(n))
    //              if (nums[i] == nums[j]) return true; 
    //     }
    // }
    // return false; 
   

// // Sorting: 
//         sort(nums.begin(), nums.end()); // o(log(n)) 
//         for(int i = 0; i<nums.size(); i++){
//             if (i+1 < nums.size())
//             {
//                 if (nums[i] == nums[i+1]) return true;
//         } 
//             }
//         return false; 




// Hash Set: 
    //    unordered_set<int> seen; // o(1) 

    //     for (int i: nums){ // o(n)
    //         if (seen.count(i)) return true; // o(n)
    //         seen.insert(i); 
    //     }