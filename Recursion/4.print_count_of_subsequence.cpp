#include<bits/stdc++.h>
using namespace std;

int printF(int arr[],vector<int> &d,int ind,int sum,int s,int n){
if(ind==n)
{ 
    if(s==sum)
    {
    return 1;
    }
return 0;
}
d.push_back(arr[ind]);
s+=arr[ind];
int l=printF(arr,d,ind+1,sum,s,n);

s-=arr[ind];
d.pop_back();
int r=printF(arr,d,ind+1,sum,s,n);
return l+r;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    vector<int>d;
    int ind=0;
   int sum=8;
   int s=0;

   cout<<printF(arr,d,ind,sum,s,n);
}