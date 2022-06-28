//BIGGER CODE

class Solution{
    public:
    void solution(int i,int j,vector<vector<int>> &m,int n,vector<string> &ans,string s,vector<vector<int>> &dummy){
        if(i==n-1 && j==n-1){
        ans.push_back(s);
        return ;}
        //Down
        if(i+1<n && !dummy[i+1][j] && m[i+1][j]==1)
        {
            dummy[i][j]=1;
            solution(i+1,j,m,n,ans,s+'D',dummy);
            dummy[i][j]=0;
            
        }
        //left
        if(j-1>=0 && !dummy[i][j-1] && m[i][j-1]==1)
        {
            dummy[i][j]=1;
            solution(i,j-1,m,n,ans,s+'L',dummy);
            dummy[i][j]=0;
            
        }
        //right
        if(j+1<n && !dummy[i][j+1] && m[i][j+1]==1)
        {
            dummy[i][j]=1;
            solution(i,j+1,m,n,ans,s+'R',dummy);
            dummy[i][j]=0;
            
        }
         //upward
        if(i-1>=0 && !dummy[i-1][j] && m[i-1][j]==1)
        {
            dummy[i][j]=1;
            solution(i-1,j,m,n,ans,s+'U',dummy);
            dummy[i][j]=0;
            
        }
       
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s="";
        vector<string> ans;
        
        vector<vector<int>>dummy(n,vector<int> (n,0));
        if(m[0][0]==1) solution(0,0,m,n,ans,"",dummy);
        return ans;
    }
};

//CODE SIZE OPTIMIZATION Still left
