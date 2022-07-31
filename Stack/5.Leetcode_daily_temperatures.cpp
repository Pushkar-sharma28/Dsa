//leetcode medium 
//as same as enxt greater element but  instead of using element 
//going with index to that we can calculate distance easily


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     stack<int> st;
     int n=temperatures.size();
     vector<int> ans(n,0);
     for(int i=n-1;i>=0;i--){
        int count=0;
        while(!st.empty() && temperatures[st.top()]<=temperatures[i])
        {   st.pop();
            
        }
         if(!st.empty()) ans[i]=st.top()-i;
         st.push(i);
     }
        return ans;
    }
};