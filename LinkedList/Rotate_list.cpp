//circular list method 
//first check length and joined last node
// next at first and then 
//calculate length-k now it will take me to the new end of the new list
//and this node's next will be the address of new head 

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       
    if(head==NULL || head->next==NULL || k==0)
        return head;
        
    ListNode *temp=head;
    int length=1;
    while(temp->next!=NULL){
        temp=temp->next;
        length++;}
        cout<<length;
        
    temp->next=head;
    k=k%length;
    
    int end=length-k;
    while(end--){
      temp=temp->next;
     }
    head=temp->next;
    temp->next=NULL;
        
    return head;
    }
};