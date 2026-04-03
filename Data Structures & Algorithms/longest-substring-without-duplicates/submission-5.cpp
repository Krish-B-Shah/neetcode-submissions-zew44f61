class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> curr;
        int l = 0, best = 0;

        for (int r = 0; r < (int)s.size(); r++) {
            while (curr.count(s[r])) {
                curr.erase(s[l]);
                l++;
            }
            curr.insert(s[r]);
            best = max(best, r - l + 1);
        }
        return best;
    }
};
