/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int val = 0, ListNode *next = nullptr) : val(val), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = 0;
        ListNode* ptr = head;
        
        while (ptr) {
            ptr = ptr->next;
            i++;
        }

        if (n == i) {
            return head->next;
        }

        i -= n + 1;
        ptr = head;

        while (i > 0) {
            ptr = ptr->next;
            i--;
        }

        ptr->next = ptr->next->next;

        return head;
    }
};
