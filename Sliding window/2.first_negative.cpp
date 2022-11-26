#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr={12,-1,-7,8,-15,30,16,28};
    int n=arr.size();
    int i=0,j=0;
    int k=3;
    queue<int> track;
    while(j<n){
      if(arr[j]<0)
      track.push(arr[j]);
      
      if(j-i+1<k){
      j++;
      }
      else if(j-i+1==k){
      if(track.size()==0) ;
      else
      cout<<track.front();
      if(arr[i]==track.front()) track.pop();
      i++,j++;
      }
    }
    return 0;
}