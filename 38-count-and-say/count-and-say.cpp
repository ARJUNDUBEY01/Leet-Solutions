class Solution {
public:
    string countAndSay(int n) {
        string result = "1";

        for (int i = 1; i < n; i++) {
            string temp = "";

            for (int j = 0; j < result.length(); ) {
                int count = 0;
                char ch = result[j];

                while (j < result.length() && result[j] == ch) {
                    count++;
                    j++;
                }

                temp += to_string(count);
                temp += ch;
            }

            result = temp;
        }

        return result;
    }
};