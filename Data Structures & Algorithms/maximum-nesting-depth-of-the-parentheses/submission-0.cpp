class Solution {
public:
    int maxDepth(string s) {
        stack<char> st; 
        unsigned long max_depth = 0; 
        for (auto& i: s){
            if (i == '(') st.push(i); 

            if (i == ')'){
                max_depth = max(max_depth, st.size()); 
                st.pop(); 
            }
        }
        return max_depth; 
    }
};