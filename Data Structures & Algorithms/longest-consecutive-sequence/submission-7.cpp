class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        // First make unordered set
        unordered_set<int> numSet(nums.begin(), nums.end()); // Made a unordered set that is same as nums; 
        
        if (numSet.empty()) return 0; 
        int longest = 0;
        int result = 1; 

        // nums = [2,20,4,10,3,4,5]
        for (int num: numSet){
            if (numSet.find(num-1) == numSet.end()){
                int length = 1; 
                while(numSet.find(num + length) != numSet.end()){
                    cout << "Debug ";
                    length ++; 
                    result +=1;
                }
                longest = max(longest, length); 
            }
            result = longest; 
        }
        return result; 
    }
};
