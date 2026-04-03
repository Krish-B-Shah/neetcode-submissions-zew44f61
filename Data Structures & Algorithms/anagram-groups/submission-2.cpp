class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Have to return in sublist
        // 1st way: 

            // [ "hat", "cat", "tac"]
            // [["hat"], ["cat", "cat"]]
            // Go through loop sort each value and index, and then make a sublist for those values from index;  
            unordered_map<string, vector<string>> mp;
            for (int i = 0; i<strs.size(); i++){
                string key = strs[i]; 
                sort(key.begin(), key.end()); 
                mp[key].push_back(strs[i]);
            }
            vector<vector<string>> final_result; 
            for (auto &i : mp) {
    final_result.push_back(i.second);
}

            return final_result; 
    }
};
