class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(),nums.end());
        int maxx=1,ult_max=1;
        for(int i = 0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1) maxx++;
            else if(nums[i+1]!=nums[i]){
                ult_max = max(ult_max,maxx);
                maxx = 1;
            }

        ult_max = max(ult_max,maxx);
        }
        return ult_max;
    }
};

