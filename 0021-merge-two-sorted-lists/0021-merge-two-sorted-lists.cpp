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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        //dummy->next=head;
        ListNode* dummy=head;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while (l1!=nullptr  || l2!=nullptr ) {
            if (!l1) {
                dummy->next = l2;
                l2 = l2->next;
            } else if (!l2) {
                dummy->next = l1;
                l1 = l1->next;
            } else if (l1->val <= l2->val) {
                dummy->next = l1;
                l1 = l1->next;
            } else {
                dummy->next = l2;
                l2 = l2->next;
            }
            dummy = dummy->next;
        }
        return head->next;
    }
};