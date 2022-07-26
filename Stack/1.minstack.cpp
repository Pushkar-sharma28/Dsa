//Leetcode by name "stack min"
//SOLUTION 1:

//using two stacks approach is simple
//one stack for min element and one for normal stack
class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.size()==0) minst.push(val);
        else minst.push(min(val,minst.top()));
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};


METHOD 2:
//in this method always and always push the modified value except at the start
//and at that moment the minimum value will be the minimum of val to be pushed 
//and value already at the minimum
//modified value 2*val-mini

//for top if the value at top of the stack is minimum than 
//the current value of mini than return the value of mini and pop existing top

//for minimal the new value will be
//min=(2*currmini)-modified value

CODE :
class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {
        while(st.empty()==false) st.pop();
        mini=INT_MAX;
    }
    
    void push(int value) {
        long long val=value;
        if(st.empty()){
          mini=val;
          st.push(val);
        }
        else{
         if(val<mini){
         st.push(2*val* 1LL-mini);
         mini=val; 
         }
         else st.push(val);
        }
    }
    
    void pop() {
       if(st.empty()) return ;
       long long ele=st.top();
        st.pop();
        if(ele<mini) mini=2*mini-ele;
    }
    
    int top() {
      if(st.empty()) return -1;
      long long ele=st.top();
      if(ele<mini) return mini;
      return ele;
    }
    
    int getMin() {
        return mini;
    }
};
