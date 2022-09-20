//SIMPLE HASHMAP APPROACH
class Solution {
public:
    Node* copyRandomList(Node* head) {
     unordered_map<Node *,Node *> mpp;
     Node *temp=head;
    while(temp!=NULL){
      Node *ptr=new Node (temp->val);
      mpp[temp]=ptr;
      temp=temp->next;
    }
    
    Node *t=head;
    while(t!=NULL){
       Node* node=mpp[t];
       node->next=(t->next!=NULL) ? mpp[t->next] : NULL;
       node->random=(t->random!=NULL) ? mpp[t->random]:NULL;
       t=t->next;
    }
        return mpp[head];
    }
};


//OPTIMAL APPROACH
class Solution {
public:
    Node* copyRandomList(Node* head) {
     Node* temp = head;
	//step 1
    while(temp != NULL) {
        Node* newNode = new Node(temp->val);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
	//step 2
    Node* itr = head;
    while(itr != NULL) {
        if(itr->random != NULL)
            itr->next->random = itr->random->next;
        itr = itr->next->next;
    }
	//step 3
    Node* dummy = new Node(0);
    itr = head;
    temp = dummy;
    Node* fast;
    while(itr != NULL) {
        fast = itr->next->next;
        temp->next = itr->next;
        itr->next = fast;
        temp = temp->next;
        itr = fast;
    }
    return dummy->next;
    }
};