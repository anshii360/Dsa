class Solution {
public:
    string smallestSubsequence(string s) {
        if (s.empty())
            return "";

        vector<int> cnt(26, 0);

        for (char ch : s)
            cnt[ch - 'a']++;

        int pos = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] < s[pos])
                pos = i;

            cnt[s[i] - 'a']--;

            if (cnt[s[i] - 'a'] == 0)
                break;
        }

        char first = s[pos];

        string rem = "";
        for (int i = pos + 1; i < s.size(); i++) {
            if (s[i] != first)
                rem += s[i];
        }

        return first + smallestSubsequence(rem);
    }
};