class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // First approach I think again is sorting this entire array at first so for example 1
        // so make a copy and we can sort it see act, opst, opst, act, opst, aht

        unordered_map<string, vector<string>> res; 

        for (string s: strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }

         vector<vector<string>> result;
         for (auto &pair: res){
            result.push_back(pair.second);
         }
         return result; 
    }
};
