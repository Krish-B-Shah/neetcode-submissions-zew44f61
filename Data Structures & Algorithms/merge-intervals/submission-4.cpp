class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.empty()) return result;

        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            int next_start = intervals[i][0];
            int next_end = intervals[i][1];

            if (next_start <= end) {
                end = max(end, next_end);
            } else {
                result.push_back({start, end});
                start = next_start;
                end = next_end;
            }
        }

        result.push_back({start, end});
        return result;
    }
};
