class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
            int ans=0;
    
            for(int j=i+1;j<nums.size();j++){
                ans=(nums[i]-1)*(nums[j]-1);
                maxi=max(ans,maxi);

            }
        }
        return maxi;
    }
};