class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
        for(int k=nums[0];k>0;k--){
            if(nums[0]%k==0 && nums[nums.size()-1]%k==0){
                return k;
            } 
        }
        return 1;
    }
};