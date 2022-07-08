class Solution {
public:
    bool isvalid(string s,int start,int end){
        while(start<=end){
       if(s[start++]!=s[end--])
           return 0;
        }
        return 1;
    }
    void solution(vector<vector<string>> &ans,int ind,vector <string> dummy,string s)
    {     
        if(ind ==s.size())
        {ans.push_back(dummy);
         return;}
            for(int i=ind;i<s.length();i++)
            { if(isvalid(s,ind,i)){
                     dummy.push_back(s.substr(ind,i-ind+1));
                     solution(ans,i+1,dummy,s);
                     dummy.pop_back();
            }   }       
    }

        vector<vector<string>> partition(string s) {
     vector<vector<string>> ans;
        vector <string> dummy;
            int ind=0;
        solution(ans,ind,dummy,s);
        return ans;
        
    }
};
