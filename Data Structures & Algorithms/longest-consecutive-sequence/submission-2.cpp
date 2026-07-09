class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int count = 1,ult_max = 1;

        for(int i=0;i<n;i++){
            if(s.contains(nums[i]-1)) continue;
            else{
                int num = nums[i];
                while(1){
                    if(s.contains(num+1)) {
                        count++;
                        num+=1;
                    }
                    else break;
                }
                ult_max = max(ult_max,count);
                count = 1;
            }
        }
        return ult_max;
    }
};

