/*
Group all the anagrams together into a sublist
- Input: List of strings
- Output: List of sublists of strings or anagram
- Edge cases: If empty -> return sublist with empty string

Brute Force Approach: 
So the brute force approach is first sort the first element and then compare the sort with all the remaining elements if its matches then put them together in a sublist and continue. -> o(n^2) 

Optimal approach: 
    sorted_strs = which stores the sorted element of each element in the orignal string. 
    then I will create an unordered_map<string> the key = sorted_string and the value = the orginal string


*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted_strs; 
        for(auto& i: strs){
            string temp = i; 
            sort(temp.begin(), temp.end());
            sorted_strs.push_back(temp); 
        }
        
        unordered_map<string, vector<string>> result; 

        for (int i = 0; i < strs.size(); i++){
            result[sorted_strs[i]].push_back(strs[i]);  
        }

        vector<vector<string>> final_result; 
        for (auto& [key, value]: result){
            final_result.push_back(value); 
        }


        return final_result; 


    }
};
