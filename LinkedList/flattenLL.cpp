/* merge two sorted list problem simple af*/
Node *mergelist(Node *a,Node *b){
    if(!a) return b;
    if(!b) return a; 
    Node *temp=new Node(0);
    Node *result=temp;
    while(a!=NULL && b!=NULL){
        if(b->data>a->data)
        {
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        else{
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
    }
    if(a) temp->bottom=a;
    else if(b) temp->bottom=b;
    
    return result->bottom;
    
}
/*this flatten function is based on the fact that we are going backwards
and then constructing the linked list*/
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   return root;
   
   root->next=flatten(root->next);
   
   root=mergelist(root,root->next);
   
   return root;
}
