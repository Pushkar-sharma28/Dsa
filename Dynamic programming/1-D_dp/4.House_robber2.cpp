LEETCODE NAME QUESTION
/*
the idea is simple if i want to exclude first and last 
at a particular time then i can just take two temp arrays and check
the max between them which ensures that i am not using 
first and last simulataneously*/ 

class Solution {
public:
    int rob2(vector<int>& nums) {
    
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
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n=nums.size();
        if(n==1) return nums[0];
        for(auto i=0;i<nums.size();i++){
           if(i!=0) temp1.push_back(nums[i]);
           if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(rob2(temp1),rob2(temp2));
    }
};