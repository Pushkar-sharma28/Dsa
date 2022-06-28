class Solution {
public:
    void solution(vector<vector<int>> &ans,int ind,vector<int> &nums){
   if(ind==nums.size()){
       ans.push_back(nums);
        return ;}
        //creating a set to keep track of all the new elements being used
        set<int> s;
        for(int i=ind;i<nums.size();i++){
            //checking if the element is already in set or not 
            //but for every new instance there will be a new set
            if(s.find(nums[i])!=s.end()) continue;
            //since it wasn't found inserting this element in set
            s.insert(nums[i]);

            swap(nums[ind],nums[i]);
            
            solution(ans,ind+1,nums);
            
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int ind=0;
        solution(ans,ind,nums);
            return ans;
    }
};