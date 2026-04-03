class Solution {
public:

    string encode(vector<string>& strs) {
        string result = ""; 

        for (int i =0; i<strs.size(); i++){
            result += strs[i];
            result += "~";
        }
        cout << result; 
        return result; 
    }





    vector<string> decode(string s) {
        vector<string> result; 
        string result_string = "";
        for (char i: s){
            if (i != '~'){
                result_string += i; 
            }
            else{
                result.push_back(result_string);
                result_string = "";
            }
        }

        return result; 
    }
};
