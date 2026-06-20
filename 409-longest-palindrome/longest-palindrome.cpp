class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int len = 0;
        bool odd = false;

        for (char ch : s) mp[ch]++;

        for (auto it : mp) {
            if (it.second % 2 == 0)
                len += it.second;
            else {
                len += it.second - 1;
                odd = true;
            }
        }

        if (odd) len++;

        return len;
    }
};