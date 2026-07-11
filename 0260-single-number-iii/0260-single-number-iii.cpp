class Solution {
public:
    vector<int> singleNumber(vector<int>& nums){

        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int i=0;i<nums.size();){
            if(i==nums.size()-1 || nums[i]!=nums[i+1]){
                a.push_back(nums[i]);
                i++;
            }
            else{
                i+=2;
            }
        }
        return a;
    }
};