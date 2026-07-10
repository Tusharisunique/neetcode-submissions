class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0, min_price = INT_MAX;
        for(auto p : prices){
            min_price = min(min_price,p);
            int profit = p - min_price;
            maxp = max(maxp,profit);
        }
        return maxp;
    }
};
