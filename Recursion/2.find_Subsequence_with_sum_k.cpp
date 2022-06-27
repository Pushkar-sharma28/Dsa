#include<bits/stdc++.h>
using namespace std;
void printF(int arr[],vector<int> &d,int ind,int sum,int s,int n){
if(ind==n)
{ if(s==sum){
    for(auto it: d){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
  
}
return ;
}
d.push_back(arr[ind]);
s+=arr[ind];
printF(arr,d,ind+1,sum,s,n);

s-=arr[ind];
d.pop_back();
printF(arr,d,ind+1,sum,s,n);

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