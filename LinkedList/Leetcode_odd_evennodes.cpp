//Using the split method

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       if(head==NULL || head->next==NULL)
           return head;
              
        ListNode *odd=head,*even=head->next,*even_start=head->next;

      //just jumping alternatively and connecting the next part of
      //odd and even at their places 
       while(odd->next && even->next){
        odd->next=even->next;
        even->next=odd->next->next;
        
        odd=odd->next;
        even=even->next;
       }
        odd->next=even_start;
        return head;
    }
};