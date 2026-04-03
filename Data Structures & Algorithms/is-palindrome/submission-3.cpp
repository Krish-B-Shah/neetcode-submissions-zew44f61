class Solution {
public:
    bool isPalindrome(string s) {
        // Remove the whitespace and the other character
        string new_string; 
        for (int i = 0; i<s.length(); i++){
            if (isalnum(s[i])){
            new_string += tolower(s[i]);
            }
        }

        cout << new_string << endl; 

        int middle_index = (new_string.length()/2);
        string first_part = "";
        string second_part = "";
        for (int i = 0; i<=new_string.length(); i++){
           
            if (i<middle_index){
                    first_part += new_string[i];
                    second_part += new_string[new_string.length()-i-1];
            }
        }

        cout << first_part << endl; 
        cout << second_part << endl; 
        if (first_part == second_part){
            return true; 
        }
        return false; 
    }
};
