#include<bits/stdc++.h>
using namespace std;
bool printF(int arr[],vector<int> &d,int ind,int sum,int s,int n){
if(ind==n)
{ if(s==sum){
    for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;
    return true;
  
}
return false;
}
d.push_back(arr[ind]);
s+=arr[ind];
if(printF(arr,d,ind+1,sum,s,n)==true) return true;

s-=arr[ind];
d.pop_back();
if(printF(arr,d,ind+1,sum,s,n)==true) return true;;

return false;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    vector<int>d;
    int ind=0;
   int sum=5;
   int s=0;

   printF(arr,d,ind,sum,s,n);
}