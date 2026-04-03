#include <string>

class Solution {
public:
    bool isAnagram(string s, string t) {
       // Second approach = hash table
       if (s.length() != t.length())return false; 
        vector<int> hash_table (26, 0); 
        for (auto i: s){
            hash_table[i-97]++; 
        }
        for (auto i: t){
            hash_table[i-97]--; 
        }
        for (auto i: hash_table){
            if (i != 0) return false; 
        }
        return true; 
    }
};




// // First approach = sorting - Time complexity o(nlogn)
//        sort(s.begin(), s.end()); 
//        sort(t.begin(), t.end()); 

//        return s == t; 