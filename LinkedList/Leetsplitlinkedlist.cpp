 //remember the example of 1 to 10 nodes with k=3
 //extra node will be 1 so 4,3,3 will be containers

class Solution {
public:
//length of the linked list
    int getlength(ListNode* &head ){
        ListNode *ptr=head;
        int len=0;
        while(ptr!=NULL){
          ptr=ptr->next;
           len++;
        }
        return len;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       int len=getlength(head); 
       int partsize=len/k;
       int extranodes=len%k;
       vector<ListNode *> ans;
       ListNode *curr=head,*prev=NULL;
       while(head){
         int eachpartsize=partsize;
         ans.push_back(curr);

         //inserting first partsize number of nodes in 
         //container.
         while(eachpartsize>0){
         prev=curr;
         curr=curr->next;
         eachpartsize--;
         }
        //afte this iteration curr will be at the location will 
        //be either the head of new list or at the extranodelocation


        //once my container is filled will check for extranodes
        //and take extra node one at a time
         if(extranodes!=0 && curr!=NULL){
           extranodes--;
           prev=curr;
           curr=curr->next;
         }
           
         //since one of my bucket is complete making the previous
         //next as null to change into new linked list  
          if(prev!=NULL){
            head=curr;
            prev->next=NULL;
          }
          
       }
         while(ans.size()!=k)
            ans.push_back(NULL);
        return ans;
    }
};