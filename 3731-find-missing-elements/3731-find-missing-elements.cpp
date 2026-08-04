class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>a;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1!=nums[i]){
                for(int x=nums[i-1]+1;x<nums[i];x++){
                a.push_back(x);
                }
            }
           
        }
        return a;
        
    }
};