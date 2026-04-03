class Solution {
public:
    bool isAnagram(string s, string t) {
        // First approach that comes to mind is sorting
        // Second apporach is hashing by hash table


        if(s.length() != t.length()){
            return false; 
        }


        vector<int> count(26, 0);

        for (int i = 0; i<s.length(); i++){
            count[s[i]-'a']++; 
            count[t[i]-'a']--;
        }

        for (auto &i: count){
            if (i != 0){
                return false; 
            }
        }

        return true; 
    }
};
