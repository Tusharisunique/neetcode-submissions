class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxl,maxr(n);
        int maxx = -1;
        for(auto h : height){
            maxx = max(maxx,h);
            maxl.push_back(maxx);
        }
        for(int i = n-1,maxx = 0;i>=0;i--){
            maxx = max(maxx,height[i]);
            maxr[i] = maxx;
        }

        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=(min(maxr[i],maxl[i]) - height[i]);
        }
        return sum;
    }
};
