class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                ans.push_back(nums[i]);
                i++;
            }

        }
        return ans;
        
    }
};