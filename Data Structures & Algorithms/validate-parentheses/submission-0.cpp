class Solution {
private:
    stack<int> st;
public:
    bool isValid(string s) {
        for(auto it : s){
            if(st.empty()) {
                if(it == '[' || it == '{'||it == '(')st.push(it);
                else return false;
            }
            else{
                if(it == '[' || it == '{'||it == '(') st.push(it);
                else{
                    if(it == ')'){
                        if(st.top() == '(') st.pop();
                        else return false;
                    }
                    else if(it == ']'){
                        if(st.top()=='[') st.pop();
                        else return false;
                    }
                    else if(it == '}'){
                        if(st.top() == '{') st.pop();
                        else return false;
                    }
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
