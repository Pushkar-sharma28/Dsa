// Linear queue
#include <bits/stdc++.h> 
class Queue {
    public: 
    int *arr;
    int qfront,rear,size;
public:
    Queue() {
        // Implement the Constructor
        size=100001;
        qfront=0,rear=0;
        arr=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==0  && rear==0)
            return 1;
        else return 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
            cout<<"Queue is full";
        arr[rear]=data;
        rear=rear+1;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront==rear) return -1;
        else {
            int ele=arr[qfront];
            qfront+=1;
            if(qfront==rear)
            {
             qfront=0,rear=0;
            }
            return ele;    
        }    
    }

    int front() {
        // Implement the front() function
        if(qfront==rear || (qfront==0 && rear==0)) return -1;
        else 
        return arr[qfront];
    }
};


//Circular queue
#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front,rear,size,capacity;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here
        size=0;
        capacity=n;
        arr=new int[capacity];
        front=-1;
        rear=0;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
       if(size==capacity) return 0;
       else{
           arr[rear]=value;
           size++;
           if(front==-1)
               front=0;
           
           rear=(rear+1)%capacity;
           return true;
       }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(size==0) return -1;
        int num=arr[front];
        front=(front+1)%capacity;
        size--;
        if(front==rear){
           front=-1;
            rear=0;
        }
       return num;
    }
};
