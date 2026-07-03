class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        vector<pair<int,char>>freq;
        for(auto x:mp){
            freq.push_back({x.second,x.first});
        }
        sort(freq.rbegin(),freq.rend());
        string ans;
    
        for(int i=0;i<freq.size();i++){
           ans+=string(freq[i].first,freq[i].second) ;
        }
        return ans;
    }
};