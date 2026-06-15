class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=NULL;
        while(head){
            ListNode* next=head->next;
            head->next=curr;
            curr=head;
            head=next;
        }
        return curr;
    }
};
