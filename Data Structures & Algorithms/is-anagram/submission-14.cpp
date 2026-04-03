class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false; 
        vector<int> count(26, 0); // Empty vector of 26 letters occurence currently filled with 0s
        int n = s.length(); 
        for (int i = 0; i < n; i++){
            count[s[i] - 'a']++; // incrementing 
            count[t[i] - 'a']--; // decrementing
        }

        for (auto& j: count){
            if (j!=0) return false;
        }
        return true; 

    }
};


/*
Approach 1 - Sorting o(nlog(n))

s = "racecar"
t = "carrace"

s = aaccerr
t = aaccerr

after sorting we just straight up compare if its equal or same return true; 
otherwise return false; 

Approach 2: Hash Table
s = "racecar"
t = "carrace"

a = 2 
c = 2
e = 1 
r = 2


we will avoid increment two different vector
rather we will increment all the letters in s and decrement all the letters in t

and at the end we will see if any value greater than or less than 0 then its false otherwise true


*/