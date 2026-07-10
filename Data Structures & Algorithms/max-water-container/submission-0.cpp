class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx = 0;
        int i = 0,j = heights.size()-1;
        while(i<j){
            int l = min(heights[i],heights[j]), b = j-i;
            int area = l*b;
            maxx = max(maxx,area);
            (heights[i]<=heights[j])? i++ : j--;
        }
        return maxx;
    }
};
