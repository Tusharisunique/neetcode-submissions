class MinStack {
private:
    long long int mini;
    stack<long long int> st;
public:
    MinStack() {
        mini = LLONG_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        else{
            if(val >= mini) st.push((long long int)val);
            else{
                st.push((2LL *val) - mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        long long int x = st.top();
        st.pop();
        if(x<mini){
            mini = 2LL *mini - x;
        }
    }
    
    int top() {
        if(st.top() >= mini) return (int)st.top();
        return (int)mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};
