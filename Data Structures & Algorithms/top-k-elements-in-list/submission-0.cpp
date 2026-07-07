class Solution {
private:
//creation of comparator method within a structure for initialising the required max heap.
struct compare{
        bool operator()(const pair<int,int> &a, const pair<int,int> &b){
        return b.second>a.second;
    }
};
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>, compare> pq;
        vector<int> vec;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto &it:m){
            pq.push(it);
        }
        for(int i=0;i<k;i++){
            int ele = pq.top().first;
            vec.push_back(ele);
            pq.pop();
        }
        return vec;
    }
};
