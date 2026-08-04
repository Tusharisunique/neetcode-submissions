class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<double,double>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({position[i], speed[i]});
        }
        sort(temp.rbegin(),temp.rend());
        stack<double> st;
        for(int i = 0;i<n;i++){
            double time = (target-temp[i].first)/temp[i].second;
            if(st.empty()) st.push(time);
            else if(time > st.top()) st.push(time);
        }
        if(st.empty()) return 1;
        return st.size();
    }
};
