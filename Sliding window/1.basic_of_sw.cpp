// Given an array of size n and we have to find the maximum sum of subarray of size 3

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,5,1,8,2,9,1};
    int n=arr.size();
    int i=0,j=0;
    //window size = 3
    int sum=0;
    int k=3;
    int maxi=INT_MIN;
    while(j<n){
    sum+=arr[j];
    if(j-i+1<k)
       j++;
    else if(j-i+1==k) {
        maxi=max(sum,maxi);
       sum-=arr[i];
       i++;
       j++;
    }
    }

    cout<<maxi;
    return 0;
}