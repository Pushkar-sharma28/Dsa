class Solution {
public:
   void solution(vector<vector<string>> &ans,vector<string > &board,vector<int>&left
                ,vector<int>&lowdig,vector<int>&updig,int n,int col)
   {
       if(col==n)
       {
          ans.push_back(board);
           return ;
       }
       
       for(int row=0;row<n;row++){
        if(left[row]==0 && lowdig[row+col]==0 && updig[n-1 + col-row]==0){
            left[row]=1 ; lowdig[row+col]=1; 
            updig[(n-1)+(col-row)]=1;
            board[row][col]='Q';
          solution(ans,board,left,lowdig,updig,n,col+1);
            board[row][col]='.';
            left[row]=0 ; lowdig[row+col]=0; 
            updig[(n-1)+(col-row)]=0;

        }
       } 
   }
    vector<vector<string>> solveNQueens(int n) {
      vector<int> left(n,0),lowdig(2*n-1,0),updig(2*n-1,0);  
      string s(n,'.');
        vector<vector<string>> ans;
      vector<string> board(n);
        for(int i=0;i<n;i++){
         board[i]=s;
        }
        solution(ans,board,left,lowdig,updig,n,0);
   return ans; 
   }
};