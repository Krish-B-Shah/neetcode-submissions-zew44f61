# include <vector> 
#include <set>
using namespace std; 
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> remove_duplicates;
        for (int i = 0; i < nums.size(); i++){
            remove_duplicates.insert(nums[i]);
        }
        return (remove_duplicates.size() < nums.size());
}
};