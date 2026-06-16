class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* pre=NULL;
        while(slow){
            ListNode* temp=slow->next;
            slow->next=pre;
            pre=slow;
            slow=temp;
        }
        ListNode* first=head;
        ListNode* second=pre;
        while(second){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        
        return true;
    }
};
