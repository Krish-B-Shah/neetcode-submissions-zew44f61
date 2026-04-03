class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result; 
        sort(intervals.begin(), intervals.end()); // Sort the intervals to keep it clean and overall logic to work. 
        int n = intervals.size(); // n = 2
        int start = intervals[0][0]; // 1
        int end = intervals[0][1]; // 4
        int next_start = 0; 
        int next_end = 0; 
   
        

        for (int i = 0; i < n; i++){   // 0 < 2
                if (i + 1 < n ){ // 1 < 2
                    next_start = intervals[i+1][0]; // 2 
                    next_end = intervals[i+1][1]; // 3
                     
                if (end >= next_start){   // 4 > 2
                    end = max(end, next_end); // end = 3
                }
                else{
                    result.push_back({start, end}); // result = [[1, 6], [8, 10],   
                    start = next_start; // start = 15
                    end = next_end;  // end = 18
                }
         }
                else{
                    result.push_back({start, end}); 
                }
                        }



        return result; 
        
    }
};