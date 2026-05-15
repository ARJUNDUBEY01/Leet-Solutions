class Solution {
public:
    bool digitCount(string num) {
        for (int i = 0; i < num.length(); i++) {
            int count = 0;

            for (char ch : num) {
                if (ch - '0' == i) {
                    count++;
                }
            }

            if (count != num[i] - '0') {
                return false;
            }
        }

        return true;
    }
};