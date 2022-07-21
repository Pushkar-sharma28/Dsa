Ques- every opposite node should be equal

LOGIC:
1)p->val == q->val if the values of two nodes equal or not
2)issame(left,left) checking if the left of both the trees are equal or not
3)issame(right,right) checking if the right of both the trees are equal or not

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
            return p==q;
       return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }
};