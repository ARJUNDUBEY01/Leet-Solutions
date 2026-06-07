class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            if (num % 2 == 0) {
                freq[num]++;
            }
        }

        int ans = -1;
        int maxFreq = 0;

        for (auto &p : freq) {
            int num = p.first;
            int count = p.second;

            if (count > maxFreq ||
               (count == maxFreq && num < ans)) {
                maxFreq = count;
                ans = num;
            }
        }

        return ans;
    }
};