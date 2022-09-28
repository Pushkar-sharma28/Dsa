#include<bits/stdc++.h>
using namespace std;
class heaps{
 public:
 int arr[100];
 int size=0;

//INSERTION IN HEAP
 void insert(int val){
    size+=1;
    int index=size;
    arr[index]=val;

    while(index>1){
        int parent=index/2;

        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return ;
        }
    }
 }

 void print(){
    for(int i=0;i<=size;i++)
    cout<<arr[i]<<" ";

     cout<<endl;
 }
 //DELETIION IN HEAP
 void delete1(){
    if(size==0)
    {
        cout<<"nothing to delete";
        return ;

    }
    arr[1]=arr[size];
    size--;
    int i=1;
    while(i<size){
        int leftindex=2*i;
        int rightindex=2*i+1;
        if(leftindex<size && arr[i]<arr[leftindex])
        {
            swap(arr[leftindex],arr[i]);
            i=leftindex;
        }
        else if(rightindex<size && arr[i]<arr[rightindex])
        {
            swap(arr[rightindex],arr[i]);
            i=rightindex;
        }
        else 
        return ;
    }
    return ;
 }
};

//for max heap
//HEAPIFY ALGORITHM
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[largest]<arr[left])
    largest=left;

    if(right<=n && arr[largest]<arr[right])
    largest=right;

    if(i!=largest){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

//for minimum heap
//the indexing for this code is being started from 0 not from1 
/*void heapify(vector<int> &arr,int n,int i){
int smallest=i;
int left=2*i+1;
int right=2*i+2;
    if(left<n && arr[left]<arr[smallest])
        smallest=left;
    
   if(right<n && arr[right]<arr[smallest])
       smallest=right;
    
    if(i!=smallest){
    swap(arr[smallest],arr[i]);
     heapify(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
       heapify(arr,n,i);
    }
    return arr;
}
*/

void heapsort(int arr[],int n){
    int size=n;
    while(size>1){
        //step 1
        swap(arr[size],arr[1]);

        //step2
        size--;
        //step 3
        heapify(arr,size,1);
    }
}
int main(){


   /* heaps h;
    h.insert(50);
    h.insert(55);
    h.insert(52);
    h.insert(60);

    h.print();

    h.delete1();
    cout<<endl;
    h.print();
    
    */
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    heapsort(arr,n);
   for(int i=1;i<= n;i++)
   cout<<arr[i]<<" ";
   return 0;
}