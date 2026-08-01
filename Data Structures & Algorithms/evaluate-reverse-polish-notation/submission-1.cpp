class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto s : tokens){
            if(s == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y + x;
                st.push(ans);
            }
            else if(s == "*"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y * x;
                st.push(ans);
            }
            else if(s == "-"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y - x;
                st.push(ans);
            }
            else if(s == "/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y / x;
                st.push(ans);
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
