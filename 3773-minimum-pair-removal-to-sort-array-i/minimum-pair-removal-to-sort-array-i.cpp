class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while (!is_sorted(nums.begin(), nums.end())) {
            
            int pos = 0;

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] + nums[i - 1] <
                    nums[pos] + nums[pos + 1]) {
                    pos = i - 1;
                }
            }

            nums[pos] = nums[pos] + nums[pos + 1];
            nums.erase(nums.begin() + pos + 1);

            count++;
        }

        return count;
    }
};