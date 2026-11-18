class Solution {
public:
    void solve(int i, vector<int>& candidates, int target, vector<int>& sum, vector<vector<int>>& result) {
        if(target < 0 || i == candidates.size()) 
        return;
        if(target == 0) {
            result.push_back(sum);
            return;
        }
        sum.push_back(candidates[i]);
        solve(i, candidates, target - candidates[i], sum, result);
        sum.pop_back();
        solve(i + 1, candidates, target, sum, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        solve(0, candidates, target, ans, result);
        return result;
    }
};