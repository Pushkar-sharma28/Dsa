DfS on grids...

class Solution {
public:
    int solve(vector<vector<int>> &grid,int i ,int j,int &count,int &n,int &m){
        if(i<0 || j<0 || i>=n || j>=m)   return 0;
        
        if(grid[i][j]==0) return 0;
        //to ensure that no 1 is calculated more than 1.
        //and there is no need to change it bcz while bcktracking grid 
        //will be in its normal state
        grid[i][j]=0;

        //Normal grid backtracking check
        if(solve(grid,i+1,j,count,n,m) ==1) count++;
        if(solve(grid,i-1,j,count,n,m) ==1) count++;
        if(solve(grid,i,j+1,count,n,m) ==1) count++;
        if(solve(grid,i,j-1,count,n,m) ==1) count++;
        
        return 1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<grid.size();i++){
             for(int j=0;j<grid[0].size();j++){
              if(grid[i][j]==1)
              { 
                 int count=1;
                 solve(grid,i,j,count,n,m);
                 ans=max(ans,count);
              }
             }
        }
        return ans;
    }
};