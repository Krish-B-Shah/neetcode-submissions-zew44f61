class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {{}}; 
        sort(intervals.begin(), intervals.end()); 
        int n = intervals.size();
        int start = 0; 
        int end = 0;  
        vector<vector<int>> res;  
        res.push_back(intervals[0]); 

        for (int i = 1; i<n; i++){
            start = intervals[i][0]; 
            end = intervals[i][1]; 

            if (start <= res.back()[1]){
                res.back()[1] = max(res.back()[1], end);
            }
            else{
                res.push_back({start, end}); 
            }
        }   

        return res; 

    }
};
