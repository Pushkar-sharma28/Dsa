class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode *first=head;
       for(int i=1;i<k;i++) first=first->next;
       
       ListNode *second=head;
       ListNode *ptr=first;
       while(ptr->next!=NULL){
         second=second->next;
         ptr=ptr->next;
       }
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
        
        return head;
    }
};