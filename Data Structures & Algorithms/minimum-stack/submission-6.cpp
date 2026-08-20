class MinStack {
public:
    stack<int>n;
    stack<int>m;
    int min=INT_MAX;
    MinStack() {
    }
    
    void push(int val) {
        if(n.empty())
        {
            min=val;
        }
        else if(val<=min)
        {
            m.push(min);
            min=val;
        }
        n.push(val);
    }
    void pop() {
        if(n.top()==min)
        {
            if(!m.empty())
            {   
                min=m.top();
                m.pop();
            }
        }
        n.pop();
    }
    
    int top() {
       return n.top();        
    }
    int getMin() {
        return min;
    }
};
