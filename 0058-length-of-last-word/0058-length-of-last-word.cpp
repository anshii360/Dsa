class Solution {
public:
    int lengthOfLastWord(string s) {
        string a;
     for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            a+=s[i];
        }
        else if(a.size()>0){
            break;
        }
        
     } 
     return a.size();  
    }
};