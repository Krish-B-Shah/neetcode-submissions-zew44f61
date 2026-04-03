class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> seen; 

       for(int num: nums){
            if (seen.count(num)){
                return true; 
            }
            else{
                seen.insert(num);
            }
       }
       return false;
       
       
       
       
       
       
        // // Brute force way: 
        // for (int i = 0; i<nums.size(); i++){
        //     for (int j = i+1; j < nums.size(); j++){
        //         if (nums[i] == nums[j]){
        //             return true; 
        //         }
        //     }
        // }
        // return false; 
    }
};