Iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if(head==NULL)
            return head;
     ListNode * prev=NULL,*current=head,*forward=current->next;
        while(current!=NULL)
        { forward=current->next;
           current->next=prev;
         prev=current;
         current=forward;
        }
        head=prev;
        return head;  
    }
};

RECURSIVE METHOD 1
class Solution
{
    public:
    //Function to reverse a linked list.
    void reverseL(struct Node* &head,Node *prev,Node *curr){
        if(curr==NULL){
        head=prev;
        return;}
        
        struct Node *forw=curr->next;
        reverseL(head,curr,forw);
        curr->next=prev;
    }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* curr=head;
        Node *prev=NULL;
        reverseL(head,prev,curr);
        return head;
    }
    
};

RECURSIVE METHOD 2
 
Node *reverse(Node *head){
    if (head==NULL || head->next ==NULL)
    return head;

    int chotahead=reverse(head->next);
    head->next->next=head;
    head->next;

    return chotahead;
}
