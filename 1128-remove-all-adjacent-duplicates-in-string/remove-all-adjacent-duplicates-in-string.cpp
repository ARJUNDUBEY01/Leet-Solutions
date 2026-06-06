class Solution {
public:
    string removeDuplicates(string s) {
        string st = "";

        for (char ch : s) {
            if (!st.empty() && st.back() == ch) {
                st.pop_back();   // Remove duplicate
            } else {
                st.push_back(ch); // Add character
            }
        }

        return st;
    }
};