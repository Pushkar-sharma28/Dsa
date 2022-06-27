#include<bits/stdc++.h>
using namespace std;
void print1(int index,int arr[],vector<int>d,int n){
 if(index>=3){
     if(d.size()==0)
     {
         cout<<"kuch nhi hai bahi isme"<<endl;
         return ;
     }
  for(int i=0;i<d.size();i++)
  { cout<<d[i]<<" ";
 }
 cout<<endl;
 return;}
 d.push_back(arr[index]);
 print1(index+1,arr,d,n);
 d.pop_back();
 print1(index+1,arr,d,n);
}
int main()
{
    int arr[3]={3,1,2};
    vector<int> d;
   int index=0;
   int n=3;
   print1(index,arr,d,n);
    return 0;
}