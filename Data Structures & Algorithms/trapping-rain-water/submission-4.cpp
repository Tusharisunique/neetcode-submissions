class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0,j = height.size()-1;
        int maxl = 0,maxr = 0,sum = 0;
        while(i<j){
            maxl = max(maxl,height[i]);
            maxr = max(maxr,height[j]);
            sum+=(maxl - height[i]);
            sum+=(maxr-height[j]);
            (height[i]<=height[j])?i++:j--;
        }
        return sum;

    }
};
