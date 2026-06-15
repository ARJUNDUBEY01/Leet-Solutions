class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans = 0;
        for (auto &x : s)
            ans = max(ans, (int)count(x.begin(), x.end(), ' ') + 1);
        return ans;
    }
};