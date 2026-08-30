class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minPos = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxPos = max_element(nums.begin(), nums.end()) - nums.begin();
        int ans1 = max(minPos, maxPos) + 1;
        int ans2 = n - min(minPos, maxPos);
        int ans3 = min(minPos, maxPos) + 1 + n - max(minPos, maxPos);
        return min({ans1, ans2, ans3});
    }
};