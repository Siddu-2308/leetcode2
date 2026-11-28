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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* a=dummy;
        ListNode* b=dummy;
        ListNode* prev=nullptr;
        for(int i=0;i<n;i++){
            b=b->next;
        }
        while(b!=nullptr){
            prev=a;
            a=a->next;
            b=b->next;
        }
        prev->next=a->next;
        return dummy->next;
    }
};