class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> vec;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto &it:m){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            int ele = pq.top().second;
            vec.push_back(ele);
            pq.pop();
        }
        return vec;
    }
};
