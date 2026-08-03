class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head; // base case
        }
        ListNode* newHead = reverseList(head->next);
        head->next->next = head; // reverse link
        head->next = nullptr;    // break old link
        return newHead;
    }
};
