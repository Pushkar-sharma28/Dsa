class Solution {
public:
    bool solution(vector<vector<char>>& board,int i,int j,string &word,int k)
    {
     if(k==word.size())
         return true;
        
     if(i<0 || j<0|| i==board.size() || j==board[0].size() || board[i][j]!=word[k]) return false;
     if(board[i][j]=='#') return false;
         char ch=board[i][j];
         board[i][j]='#';
         bool op1=solution(board,i+1,j,word,k+1);
         bool op2=solution(board,i,j-1,word,k+1);
         bool op3=solution(board,i,j+1,word,k+1);
         bool op4=solution(board,i-1,j,word,k+1);
         board[i][j]=ch;
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
      for(int i=0;i<board.size();i++){
      for(int j=0;j<board[0].size();j++){
        if(board[i][j]==word[0]) 
            if(solution(board,i,j,word,0)) return true;
      }
      }
        return false;
    }
};