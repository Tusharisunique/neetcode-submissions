class MinStack {
private:
    stack<int> normal,minS;
    int minn;
public:
    MinStack() {
        minn = INT_MAX;
    }
    
    void push(int val) {
        normal.push(val);
        if(minn>val){
            minn = val;
            minS.push(0);
        }
        else{
            minS.push(val-minn);
        }
    }
    
    void pop() {
        if(!normal.empty()){
        normal.pop();
        minS.pop();
        if(!normal.empty()) minn = normal.top()-minS.top();
        else minn = INT_MAX;
        }
    }
    
    int top() {
        return normal.top();
    }
    
    int getMin() {
        return normal.top()-minS.top();
    }
};
