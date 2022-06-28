class Solution {
public:
    void solution(vector<vector<int>> &ans,vector<int> &ds,vector<int> &candi,int index,int target,int sum){
      if(sum==target)
          ans.push_back(ds);
      
      //using the for loop method to print all the subsequence rather than 2 recursive calls

      //now this time to not taking the repititive elements 
      for(int i=index;i<candi.size();i++){
        //condition to check for repititive elements
        if(i!=index && candi[i]==candi[i-1]) continue;

          sum+=candi[i];
          ds.push_back(candi[i]);
        
        //always the i of for loop at the place of index bcz we are going forward 
        //from i ar every call not index it's just at the start index was equal to 0.
          solution(ans,ds,candi,i+1,target,sum);
          
          sum-=candi[i];
          ds.pop_back();
      }  
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int sum=0;
        solution(ans,ds,candidates,0,target,sum);
        return ans;
    }
};