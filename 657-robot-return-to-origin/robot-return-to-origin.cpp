class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;  // Left and Right
        int y = 0;  // Up and Down

        for (char move : moves) {
            if (move == 'U') {
                y++;          // Move up
            }
            else if (move == 'D') {
                y--;          // Move down
            }
            else if (move == 'L') {
                x--;          // Move left
            }
            else if (move == 'R') {
                x++;          // Move right
            }
        }

        // Robot returns to origin only if both coordinates are 0
        return x == 0 && y == 0;
    }
};