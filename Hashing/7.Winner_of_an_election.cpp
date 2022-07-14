//gfg hashing problem

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> mpp;
        for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        }
        string name="";
        int maxi=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            string key=it->first;
            int val=it->second;
            
            if(val>maxi){
                name=key;
                maxi=val;
              }
              else if(val==maxi){
                  if(key<name) name=key;
              }
        }
        vector<string> ans;
        ans.push_back(name);
        string temp=to_string(maxi);
        ans.push_back(temp);
        return ans;
    }
};