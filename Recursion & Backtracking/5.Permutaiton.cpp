class Solution {
public:
    void solution(vector<vector<int>>&ans,int ind,vector<int> &nums){
    if(ind==nums.size()){
     ans.push_back(nums);
    }
    for(int i=ind;i<nums.size();i++){
       swap(nums[i],nums[ind]);
        solution(ans,ind+1,nums);
        swap(nums[i],nums[ind]);
    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solution(ans,0,nums);
        return ans;
    }
};