class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
    int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rem=sum-x;
        if(rem<0){
            return -1;
        }
        if(rem==0){
            return nums.size();
        }
        int answer=0;
        int ans=0;
        int left=0;
        for(int i=0; i<nums.size();i++) {
        ans+=nums[i];
        while(ans>rem) {
         ans-=nums[left];
         left++;
        }
        if(ans==rem) {
        answer=max(answer, i - left + 1);
        }
        }
        if(answer==0){
            return -1;
        }
        return nums.size()-answer;
    }
};