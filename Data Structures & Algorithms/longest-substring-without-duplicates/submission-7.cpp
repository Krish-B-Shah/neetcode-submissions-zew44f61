class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(); 
        if (n == 0) return 0; // Handle empty string edge case

        int l = 0; 
        int r = 0; // Start r at 0 so we process the first character inside the loop
        int result = 0; 
        string window = "";

        while (r < n) {
            size_t found_idx = window.find(s[r]);

            if (found_idx == string::npos) {
                // Character is unique, expand the window to the right
                window += s[r];
                r++; 
            }
            else {
                // Duplicate found! 
                // Erase everything from the start up to and including the duplicate char
                window.erase(0, found_idx + 1);
                l += found_idx + 1; // Correctly advance the left pointer
            }

            // Track the maximum size seen so far
            int size_of_window = r - l;
            result = max(result, size_of_window);
        }

        return result; 
    }
};
