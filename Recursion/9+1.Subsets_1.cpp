//Print all the subsets of a given array using for loop method
class Solution {
public:
   void solution(vector<vector<int>> &ans,vector<int> ds,vector<int> nums,int ind)
   { ans.push_back(ds);
    //it will process all the subsets formed
    
    for(int i=ind;i<nums.size();i++){
        ds.push_back(nums[i]);
        //always pass i not index
        solution(ans,ds,nums,i+1);
        ds.pop_back();
    }
   }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> ans;
        vector<int> ds;
        solution(ans,ds,nums,0);
       return ans; 
   }
};