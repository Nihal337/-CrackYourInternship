class Solution {
public:
    // valley peak approach O(N) sc : O(1)
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int n= prices.size() ;
        for(int i=1  ;i<n ;i++) {
            if(prices[i]>prices[i-1]) profit += prices[i]-prices[i-1] ;
        }
        return profit ;
    }
};
