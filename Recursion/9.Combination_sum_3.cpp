//Question is that i have to find all the combinations from 1-9 that gives a particular sum 
// here sum is n and k is the no. of elements that i can take 
class Solution {
public:
    void solution(vector<vector<int>> &ans,int k,int n,int sum,int i,vector<int> ds){
        //base case 1
        if(k==0){
        if(sum==n)
            ans.push_back(ds);
            return ;
        }
        //base case 2
        if(i>9) return ;

        //sum variable is having the sum which will be equal to given n.
        sum+=i;
        ds.push_back(i);
        //Now in this question i am decreasing the value of k
        //bcz i can take at max k element in the data structure(acc. to question)
        //so subtracting k and will check sum when k is 0
        
        solution(ans,k-1,n,sum,i+1,ds);
        sum-=i;
        ds.pop_back();

        //now here since i took the not pick step not subtracting k by 1
        //bcz i didn't picked any of the element
        solution(ans,k,n,sum,i+1,ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>> ans;
        int sum=0;
        vector<int> ds;
    solution(ans,k,n,sum,1,ds);
        return ans;
    }
};