LEETCODE - question by name
//SIMPLE IMPLEMENTATION

class MyQueue {
public:
    stack<int> input,output;
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
       int ans=peek();
       output.pop();
       return ans;
    }
    
    int peek() {
        if(output.empty())
            while(!input.empty()){
              output.push(input.top());
              input.pop();}
        return output.top();
    }
    
    bool empty() {
      return input.empty() && output.empty();
    }
};

