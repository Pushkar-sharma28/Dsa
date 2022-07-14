LEETCODE 1122

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(auto i:arr1)
            mpp[i]++;
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
          int count=mpp[arr2[i]];
              while(count>0){
              ans.push_back(arr2[i]);
              count--;}
              mpp.erase(arr2[i]);
        }
        for(auto it:mpp){
                int count=it.second;
              while(count>0){
                  ans.push_back(it.first);
                  count--;}
            }
        return ans;
    }
};