/*Tree traversals are divided into two categories 
1)dfs-simple deep recursive dive just take evverything.
ex: preorder,postorder,inorder.
recursive call is used in this traversal


2)bfs-level order traversal
ex: level order
this traversal uses a queue and iteration
*/

->dfs traversals

//INORDER TRAVERSAL OF BINARY TREES
class Solution {
public:
    void solution(TreeNode * &root,vector<int> &ans){
      if(root==NULL) return ;
      solution(root->left,ans);
      ans.push_back(root->val);
      solution(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int> ans;
     solution(root,ans);
     return ans;
    }
};

//PREORDER TRAVERSAL OF BINARY TREES
class Solution {
public:
     void solution(TreeNode * &root,vector<int> &ans){
      if(root==NULL) return ;
      ans.push_back(root->val);
      solution(root->left,ans);
      solution(root->right,ans);
    }
   
    vector<int> preorderTraversal(TreeNode* root) {
            vector<int> ans;
     solution(root,ans);
     return ans; 
    }
};

//POSTORDER TRAVERSAL OF BINARY TREES
class Solution {
public:
    void solution(TreeNode * &root,vector<int> &ans){
      if(root==NULL) return ;
      solution(root->left,ans);
      
      solution(root->right,ans);
      ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
     vector<int> ans;
     solution(root,ans);
     return ans;
    }
};

Bfs traversals

//LEVEL ORDER TRAVERSAL
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
         int size=que.size();
         vector<int> level;
         
         for(int i=0;i<size;i++){
           TreeNode *temp=que.front();
           level.push_back(temp->val);
           que.pop();
         if(temp->left) que.push(temp->left);
         if(temp->right) que.push(temp->right);
         }
            ans.push_back(level);
        }
        return ans;
    }
};