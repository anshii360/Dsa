class Solution {
    vector<int>dp;
public:
    bool winnerSquareGame(int n) {
        if (dp.empty()) {
            dp.resize(n + 1, -1);
        }
        if(dp[n] != -1){
         return dp[n];
       }
       if (n == 0) {
            return dp[n] = false;
        }

        for(int i=1;i<=n;i++){
            

            int sqr=i*i;
            if(sqr>n){
                break;
            }
            int rem=n-sqr;
            if(winnerSquareGame(rem) == false){
                dp[n]=true;
                return true;
            }
            
            }
        dp[n]=false;
       return false;
        
    }
};