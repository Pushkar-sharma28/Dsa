class Solution {
public:
    void answer(vector<vector<int>> &ans,vector<int> &ds,vector<int> &candi,int target,int index)
    { 
        if(index==candi.size())
       { 
        if(target==0) ans.push_back(ds);
        return ;
     }
     //continuously inserting the same array index to find the 
     //combination made by a single / repitive instance of same index
     if(candi[index]<=target)
      {   ds.push_back(candi[index]);
          answer(ans,ds,candi,target-candi[index],index);
          ds.pop_back();
       }
     answer(ans,ds,candi,target,index+1);
     
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=candidates.size();
        int index=0;
        answer(ans,ds,candidates,target,index);
        return ans;
    }
};