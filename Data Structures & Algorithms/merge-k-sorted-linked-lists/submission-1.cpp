/** o(n* k^2)
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // ListNode* res1 = new ListNode;
        // ListNode* curr1 = res;
        int ls = lists.size();
        if (ls == 0) return nullptr;
        if (ls == 1) return lists[0];

        for (int i = 1; i < ls; i++) {
            ListNode* p1 = lists[i];
            ListNode* p2 = lists[i - 1];
            ListNode* res = new ListNode;
            ListNode* curr = res;

            while (p1 || p2) {
                if (!p2 && p1) {
                    curr->next = p1;
                    break;
                } else if (!p1 && p2) {
                    curr->next = p2;
                    break;
                } else if (p1->val >= p2->val) {
                    curr->next = p2;
                    p2 = p2->next;

                } else if (p1->val < p2->val) {
                    curr->next = p1;
                    p1 = p1->next;
                }
                curr = curr->next;
            }
            res = res->next;
            lists[i] = res;
        }
        return lists[ls-1];
    }
};
