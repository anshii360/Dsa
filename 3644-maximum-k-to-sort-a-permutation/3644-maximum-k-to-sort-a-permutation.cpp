class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
        }
        sort(a.begin(),a.end());
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if (a[i]!=nums[i]){
                ans&=nums[i];
            }
        }
        return max(ans,0);
    }
};