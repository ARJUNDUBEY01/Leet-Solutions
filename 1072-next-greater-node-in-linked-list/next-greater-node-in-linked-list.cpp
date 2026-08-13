/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        vector<int> stack;

        while (head) {
            ans.push_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < ans.size(); i++) {
            while (!stack.empty() && ans[i] > ans[stack.back()]) {
                ans[stack.back()] = ans[i];
                stack.pop_back();
            }
            stack.push_back(i);
        }

        for (int i : stack)
            ans[i] = 0;

        return ans;
    }
};