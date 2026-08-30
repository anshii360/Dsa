class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=min_element(nums.begin(),nums.end())-nums.begin();
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
        int ans1=max(maxi,mini)+1;
        int ans2=n-min(maxi,mini);
        int ans3=min(maxi,mini)+1+n-max(maxi,mini);
        return min({ans1,ans2,ans3});
    }
};