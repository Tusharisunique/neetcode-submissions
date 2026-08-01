class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> result(n,0);
        for(int i = 0;i<n;i++){
            int ele = temperatures[i];
            if(st.empty()) st.push(i);
            else{
                if(temperatures[st.top()]>=ele) st.push(i);
                else{
                    while(!st.empty() && temperatures[st.top()]<ele){
                        result[st.top()] = i-st.top();
                        st.pop();
                    }
                    st.push(i);
                }
            }
        }
        return result;
    }
};
