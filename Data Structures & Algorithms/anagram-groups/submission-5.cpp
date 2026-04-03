class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result; 
        unordered_map<string, vector<string>> mp; 
        for(auto &i: strs){
            string sorted_i = i; 
            sort(sorted_i.begin(), sorted_i.end()); 
            mp[sorted_i].push_back(i); 
        }

        for(auto& value: mp){
            result.push_back(value.second); 
        }   

        return result;
    }
};
