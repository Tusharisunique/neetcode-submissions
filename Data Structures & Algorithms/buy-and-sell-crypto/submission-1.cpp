class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0,j = 1;
        int maxp = 0;
        while(j<n){
            if(prices[i]>=prices[j]) {
                i = j;
                j++;
            }
            else if(prices[i]<prices[j]){
                maxp = max(maxp,prices[j]-prices[i]);
                j++;
            }
        }
        return maxp;
        }
};
