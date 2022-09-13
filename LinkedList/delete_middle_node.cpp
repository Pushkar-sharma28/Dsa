//simple two pointer approach just one change that 
//using classic delete operation

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return head;
        
        if (head->next == NULL) {
          delete head;
          return NULL;
       }
      ListNode *ptr=head,*slow=head,*fast=head;
       while(fast!=NULL && fast->next!=NULL){
         ptr=slow;
         slow=slow->next;
         fast=fast->next->next;
       }
        ptr->next=slow->next;
        delete(slow);
        return head;
    }
};