NORMAL RECURSIVE SOLUTION

class Solution {
public:
    int solution(vector<int> &nums,int ind){
      if(ind==0) return nums[ind];
      if(ind<0) return 0;
        
      
      int pick=nums[ind]+solution(nums,ind-2);
          
      int nonpick=solution(nums,ind-1);
          
      return max(pick,nonpick);
    }
    int rob(vector<int>& nums) {
     
     return solution(nums,nums.size()-1);   
    }
};


APPLYING MEMOIZATION
/*just created a dp array remember that every f(ind) is 
showing the value of maximum alternative element sum till that ind*/
class Solution {
public:
    int solution(vector<int> &nums,int ind,vector<int> &dp){
      if(ind==0) return nums[ind];
      if(ind<0) return 0;
        
      if(dp[ind]!=-1) return dp[ind];
      int pick=nums[ind]+solution(nums,ind-2,dp);
          
      int nonpick=solution(nums,ind-1,dp);
          
      return dp[ind]=max(pick,nonpick);
    }
    int rob(vector<int>& nums) {
     vector<int> dp(nums.size(),-1);
     return solution(nums,nums.size()-1,dp);   
    }
};


APPLYING TABULATION
/*
steps:
take base case as value in the dp array
then handle bottom to top
*/
class Solution {
public:
   
    int rob(vector<int>& nums) {
     vector<int> dp(nums.size(),0);
     dp[0]=nums[0];
     for(int i=1;i<nums.size();i++){
         int take=nums[i];
         if(i>1) take+=dp[i-2];
             
         int nottake=dp[i-1];
         
         dp[i]=max(take,nottake);
      }
        return dp[nums.size()-1];
    }
};

APPLYING SPACE OPTIMIZATION
class Solution {
public:
   
    int rob(vector<int>& nums) {
    
     int first=nums[0];
     int second=0;
     for(int i=1;i<nums.size();i++){
         int take=nums[i];
         if(i>1) take+=second;
         
         int nottake=first;
         
         int curr=max(take,nottake);
         second=first;
         first=curr;
      }
        return first;
    }
};