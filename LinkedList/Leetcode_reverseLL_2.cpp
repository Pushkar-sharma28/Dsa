class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     ListNode *dummy=new ListNode(10);
     dummy->next=head;
        
        ListNode *prevleft=dummy,*curr=head;
        for(int i=0;i<left-1;i++)
        {      prevleft=curr;
               curr=curr->next;}
        
        
        ListNode *prev=NULL,*forward=NULL;
        for(int i=0;i<right-left+1;i++){
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
        }
        prevleft->next->next=curr;
        prevleft->next=prev;
        
        return dummy->next;
    }
};