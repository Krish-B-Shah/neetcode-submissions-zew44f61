# include <vector> 
#include <set>
using namespace std; 
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> hash; 
    for (int i: nums){
        if (hash.count(i)){
            return true; 
        }
        else{
            hash.insert(i);
        }
    }
    return false; 
    }
};