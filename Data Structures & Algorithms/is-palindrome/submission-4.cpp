class Solution {
public:
    bool isPalindrome(string s) {
        // First thing is to only include alphanumeric items 
        string s_alnum = ""; 
        for (auto i: s){
            if (isalnum(i)){
                s_alnum += tolower(i);
            }
        }
        // cout << s_alnum << endl; 

        // Set two pointers one in the front of the string and one in the back of the string. 
        int length = s_alnum.length();
        int pointer1 = 0;
        int pointer2 = length - 1; 

        for (int i = 0; i < floor(length/2); i++){
            if (s_alnum[pointer1] != s_alnum[pointer2]) return false; 
            pointer1 = pointer1 + 1; 
            pointer2 = pointer2 - 1; 
        }

        return true; 
    }
};
// // Two approaches: 
//     apporach 1: split in the middle/half and use two pointers 1 from beginning and 1 from end and compare both and check to see if it's a palindrome (o(n/2))
//     approach 2: sort it after splitting in two pieces - o(nlogn)  

