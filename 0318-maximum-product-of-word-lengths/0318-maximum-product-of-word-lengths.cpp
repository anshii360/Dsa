class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxi=0;
        for(int i=0;i<words.size();i++){
            unordered_set<char>st(words[i].begin(),words[i].end());

            for(int j=i+1;j<words.size();j++){
                int ans= (words[i].size())*(words[j].size());
                bool common=false;
                for(char c:words[j]){
                    if(st.count(c)){
                    common=true;
                    break;}

                }
                if(!common){
                    maxi=max(maxi,ans);

                }
               

            }
        }
        return maxi;
    }
};