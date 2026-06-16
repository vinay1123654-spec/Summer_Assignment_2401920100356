class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode(0);
        ListNode* head=temp;
        while(list1!=NULL&&list2!=NULL){
            if(list1->val<list2->val){
                head->next=new ListNode(list1->val);
                head=head->next;
                list1=list1->next;
            }
            else{
                head->next=new ListNode(list2->val);
                head=head->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            head->next=new ListNode(list1->val);
            head=head->next;
            list1=list1->next;
        }
        while(list2!=NULL){
            head->next=new ListNode(list2->val);
            head=head->next;
            list2=list2->next;
        }
        return temp->next;
    }
};
