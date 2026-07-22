class Solution {
public:
    char findTheDifference(string s, string t) {
       int result=0;
       int i=0;
       for(int ch:s){
        result^=ch;
        i++;
       }
       i=0;
       for(int ch:t){
        result^=ch;
        i++;
       }
       return result;
    }
};