class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

    
        string maxi = s;
        char mxDigit = 0;

        for (char ch : s) {
            if (ch != '9') {
                mxDigit = ch;
                break;
            }
        }

        if (mxDigit) {
            for (char &ch : maxi) {
                if (ch == mxDigit)
                    ch = '9';
            }
        }

      
        string mini = s;
        char mnDigit = s[0];

        for (char &ch : mini) {
            if (ch == mnDigit)
                ch = '0';
        }

        return stoi(maxi) - stoi(mini);
    }
};