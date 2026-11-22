class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        int rem=0;
        while(columnNumber>0){
        columnNumber--;
        rem=columnNumber%26;
        ans+='A'+rem;
        columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};