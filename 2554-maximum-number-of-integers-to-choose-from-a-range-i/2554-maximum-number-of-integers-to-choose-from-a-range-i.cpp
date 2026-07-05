class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_set<int>mp;
       for(int i=0;i<banned.size();i++){
        mp.insert(banned[i]);
       }
        int sum=0;
        int count=0;
       for(int i=1;i<=n;i++){
       
        if(mp.count(i)){
            continue;
        }
    
        if(sum+i<=maxSum){
            sum+=i;
            count++;
        }

       }
       return count;
    }
};