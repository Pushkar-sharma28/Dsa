// ek ke last par jakar 
//dusre par shift maar dena hai sidha

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b=headB;
        while(a!=b)
        { if(a==NULL)
            a=headB;
         else a=a->next;
         if(b==NULL)
             b=headA;
         else b=b->next;        
}
        return a;
    }
};