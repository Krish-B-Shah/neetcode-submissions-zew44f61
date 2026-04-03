class Solution {
public:
    void dfs(const vector<int>& nums, int target, int index,
             vector<int>& cur, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        if (target < 0 || index >= (int)nums.size()) return;

        // take nums[index] (can reuse)
        cur.push_back(nums[index]);
        dfs(nums, target - nums[index], index, cur, res);
        cur.pop_back();

        // skip nums[index]
        dfs(nums, target, index + 1, cur, res);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        dfs(nums, target, 0, cur, res);
        return res;
    }
};
