//Question no.473



class Solution {
public:
    bool backtrack(vector<int>&square,vector<int>&matchsticks,int side,int ind){
    if(ind==matchsticks.size())
        return true;
        
    for(int i=0;i<4;++i){
         if(square[i]+matchsticks[ind]<=side){
         square[i]+=matchsticks[ind];
         if(backtrack(square,matchsticks,side,ind+1))
         return true;
         square[i]-=matchsticks[ind];
        }
    }
       return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int peri=0;
        for(int i: matchsticks)
            peri+=i;
        
        vector<int> square(4,0);
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        int side=peri/4;
        
        return backtrack(square,matchsticks,side,0);
    }
};