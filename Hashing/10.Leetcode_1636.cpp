Revise it 20 times bitch

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it: nums)
            mpp[it]++;
        
        sort(nums.begin(),nums.end(),[&](int a,int b){
          return mpp[a]!=mpp[b] ? mpp[a]<mpp[b] : a>b ;});
        // first lambda function syntax
        //in return checking if a and b are equal or not i mean frequency
        // now returning the number which has higher frequency
    
    return nums;
    }
};