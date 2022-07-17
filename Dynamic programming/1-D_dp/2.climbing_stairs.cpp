class Solution {
public:

//same using the dp array to save answers
    int answer(int n,vector<int> &dp){
            if(n==0)
            return 1;
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int l=answer(n-1,dp);
        int r=answer(n-2,dp);
        return dp[n]=l+r;
    }

    //Tabulation
 bottom to top
    
    if(n==1 || n==2)
          return n;
     int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    


    //Space optimization
    int climbStairs(int n) {
      if(n==1 || n==2)
          return n;
       
        int first=1;
        int second=2;
        int ans=0;
        for(int i=3;i<=n;i++){
               ans=first+second;
                first=second;
                 second=ans;
        }
        return ans;
    }
};