class Solution {
public:
    int arrangeCoins(int n) {
        long long row = 0;

        while (n >= row + 1) {
            row++;
            n -= row;
        }

        return row;
    }
};