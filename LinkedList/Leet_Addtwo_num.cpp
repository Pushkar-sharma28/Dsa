class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp,*ptr=l1,*ptr1=l2;
        ListNode *dummy= new ListNode();
        temp=dummy;
        int carry=0;
     while(ptr!=NULL || ptr1!=NULL || carry)
     {    int sum=0;
      
      //Step 1 calculate value of sum from 
      //both linked list
      if(ptr!=NULL){
          sum+=ptr->val;
          ptr=ptr->next;
}
      if(ptr1!=NULL){
          sum+=ptr1->val;
          ptr1=ptr1->next;
}
     /*add the previous carry in sum 
      and then make new node and add it to answer*/
      sum+=carry;
      carry=sum/10;
      ListNode *New=new ListNode(sum%10);
      temp->next=New;
      temp=temp->next;
}
        return dummy->next;
    }
};