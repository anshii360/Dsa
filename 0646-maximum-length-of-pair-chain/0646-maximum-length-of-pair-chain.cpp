class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
});
        int count=1;
        int mini=pairs[0][0];
        int maxi=pairs[0].back();
        for(int i=1;i<pairs.size();i++){
            int first=pairs[i][0];
            int last=pairs[i].back();
            if(maxi<first){
                count++;
                maxi=last;
            }
        }
        return count;
    }
};