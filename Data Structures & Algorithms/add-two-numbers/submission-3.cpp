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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* curr = res;
        int carried = 0;
        while (l1 || l2) {
            ListNode* sum = new ListNode(0);
            if (l1 && l2) {
                sum->val = (l1->val + l2->val + carried);
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 && !l2) {
                sum->val = (l1->val + carried);
                l1 = l1->next;
            } else if (!l1 && l2) {
                sum->val = (l2->val + carried);
                l2 = l2->next;
            }
            carried = 0;

            if (sum->val > 9) {
                carried = 1;
                curr->next = sum;
                curr->next->val = (sum->val) % 10;

            } else {
                curr->next = sum;
            }
            curr = curr->next;
        }

        if (carried) {
            ListNode* sum = new ListNode(1);
            curr->next = sum;
        }
        return res->next;
    }
};
