class Solution {
public:
    bool issafe(int row,int col,vector<string>&board,int n){
    int dubrow=row;
    int dubcol=col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q')return false;
        row--;
        col--;}
        row=dubrow;
        col=dubcol;
        while(col>=0)
        { if(board[row][col]=='Q')
            return false;
         col--;
}
        row=dubrow;
        col=dubcol;
        while(row<n && col>=0)
        { if(board[row][col]=='Q')
            return false;
         row++;
         col--;
}
        return true;   
    }
     void solution(int col,vector<vector<string>> &ans,vector<string>& board,int n){
         if(col==n){
        ans.push_back(board);
        return;
         }
         for(int row=0;row<n;row++){
             if(issafe(row,col,board,n)){
             board[row][col]='Q';
             solution(col+1,ans,board,n);
             board[row][col]='.';
             }
         }
     }
     vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>> ans;
       vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
           board[i]=s;
        }
        solution(0,ans,board,n);
        return ans;
    }
};