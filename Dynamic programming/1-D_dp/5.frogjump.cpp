problem link: https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?leftPanelTab=1

Note : the thing is just do one job and left the rest to recursion 
in this f(n) will be 
f(n)=f(n-1)+f(n-2)


Memoization solution:
#include <bits/stdc++.h> 
//vector<int> dp;
int answer(vector<int> &arr,int ind,vector<int> &dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1)
        return dp[ind];
    int l=answer(arr,ind-1,dp)+abs(arr[ind]-arr[ind-1]);
    int r=INT_MAX;
    if(ind>1)
    r=answer(arr,ind-2,dp)+abs(arr[ind]-arr[ind-2]);
    
    return dp[ind]=min(l,r);
 }
int frogJump(int n, vector<int> &heights)
{  // dp.resize(n+1,-1);
   vector<int> dp(n+1,-1);
     
 return answer(heights,n-1,dp);
       // Write your code here.
}


Tabulation:
Method: going top to down that is taking base case as the starting index and then doing 
the calculations


#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++){
      int l=dp[i-1]+abs(heights[i-1]-heights[i]);
      int r=INT_MAX;
       if(i>1)
        r=dp[i-2]+abs(heights[i-2]-heights[i]);
        
      dp[i]=min(l,r);
    }
    return dp[n-1];
}


Memory optimization:
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    
    int prev2=0,prev=0;
    //int c=0;
    for(int i=1;i<n;i++){
      int l=prev+abs(heights[i-1]-heights[i]);
      int r=INT_MAX;
       if(i>1)
        r=prev2+abs(heights[i-2]-heights[i]);
        
     int c=min(l,r);
      prev2=prev;
      prev=c;
     
    }
    return prev;
}