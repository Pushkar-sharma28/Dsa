//Reptitions not allowed when printing all subsets
/* Test case:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

*/
class Solution {
public:
    void solution(vector<vector<int>>&ans,vector<int>&nums,vector<int> &ds,int index){
         ans.push_back(ds);
        for(int i=index;i<nums.size();i++){
            //Just remember this trick to skip repitions
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solution(ans,nums,ds,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int index=0;
        solution(ans,nums,ds,index);
        return ans;
    }
};