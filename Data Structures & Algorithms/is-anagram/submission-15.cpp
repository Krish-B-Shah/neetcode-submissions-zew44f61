class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // Empty array with 26 0s
        vector<int> count(26, 0); 
        
        // Go through a loop and increase value. 
        for(auto& i: s){
            count[i - 'a'] += 1; 
        }
        for(auto& i: t){
            count[i - 'a'] -= 1; 
        }


        for (auto &i: count){
            if (i != 0) return false; 
        }
        return true; 


    }
};

// Sorting - I can just compare both strings. 
// So sort(s) and sort(t) and compare both of the sorted string if its equal to each other then return otherwise return false. 
// o(nlogn) time complexity. 


// Array approach where we can count each occurance of a character. 
// There is 26 letters, make an array that is 26 letters long, and initally the count or the prefilled value should be 0 because there is no occurance. As we find any occurance we will update the number by adding 1. 
// For example, 

    // jar 
    // jam 


    // a = 1
    // j = 10

// First I will go through each character in each string, + 1, -1. At the end I am expecting the entire array to be 26s 0 as default, so in that way we make sure its an anagram. 