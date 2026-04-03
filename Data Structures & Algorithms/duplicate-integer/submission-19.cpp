class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Approach 1: 
        set<int> seen; // Set that stores numbers that are already seen in the array. 

        for (auto &i: nums){
            if (seen.find(i) != seen.end()){
                return true; 
            }
            seen.insert(i); 
        } 

        return false; 



    }
};


/*

Approach 1: 
    Go through a loop and store each number in a seen array or a set and if that number comes again then immediately return true. 
    it should be o(n) as worst case. 


Approach 2: 
    So first sort this array and check the next number to the current number.
    o (nlog(n)) - because of sorting. 


Approach 3: 
    - Where I simply just use set and normal and compare their lenghths. 


*/