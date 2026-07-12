class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        for(int i=1;i<nums.size();i++){

            diff=nums[i]-nums[i-1];
            ans=max(ans,diff);

        }
        if(nums.size()==1){
            return 0;
        }
        return ans;
    }
};