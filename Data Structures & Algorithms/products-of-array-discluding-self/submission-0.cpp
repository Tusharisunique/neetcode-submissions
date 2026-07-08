class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(),k=n-2,pro=1;

        vector<int> prefix;
        vector<int> suffix(n,1);

        prefix.push_back(pro);

        //Prefix product.
        for(int i = 0;i<n-1;i++){
            pro*=nums[i];
            prefix.push_back(pro);
        }
        //Suffix Product.
        for(int i = n-1,pro=1;i>0;i--){
            pro*=nums[i];
            suffix[k--] = pro;
        }
        
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(prefix[i] * suffix[i]);
        }
        return ans;
    }
};


/*
nums = [1,2,4,6]

Using Prefix and suffix technique.
Prefix array : [1,1,2,8]
Suffix array : [48,24,6,1]
ans =          [48,24,12,8]

*/