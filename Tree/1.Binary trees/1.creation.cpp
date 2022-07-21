BUILD A TREE USING A FUNCTION

node *buildtree(node * root){
    
    int data;
    cin>>data;
root=new node(data);
if(data==-1)
return NULL;
//calling for the left side if filled with -1 that will be finished right there
root->left=buildtree(root->left);
//calling for the right side if filled with -1 that will be finished right there
root->right=buildtree(root->right);
return root;
}