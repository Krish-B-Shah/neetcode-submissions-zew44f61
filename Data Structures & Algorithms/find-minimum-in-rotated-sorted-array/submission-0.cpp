class Solution {
public:
    int findMin(vector<int> &nums) {
        int minimum = INT_MAX; 
        for (auto& i: nums){
            minimum = min(minimum, i); 
        }
        return minimum; 
    }
};


// Brute force easy just traverse through the array via loop. 