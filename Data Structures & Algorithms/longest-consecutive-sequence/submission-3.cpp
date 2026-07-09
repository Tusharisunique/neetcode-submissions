class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int ult_max = 1;

        for(int ele : s){
            if(!s.contains(ele-1)){
                int length = 0;
                while(s.contains(ele+length)){
                    length++;
                }
                ult_max = max(ult_max,length);
            }
        }
        return ult_max;
    }
};

