class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head==NULL)
            return head;
       
        ListNode *fast=head;
        for(int i=0;i<n;i++)
            fast=fast->next;
        if(!fast) return head->next;
        ListNode *slow=head;

        //Simple intution of going kth and then n-kth then
         //slow will be at kth location automatically
        while(fast->next!=NULL){
        slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};