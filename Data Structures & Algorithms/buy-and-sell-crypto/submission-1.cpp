class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int best = 0;
        int minPrice = INT_MAX;
        for(int p : prices) {
            minPrice = min(minPrice, p);
            best = max(best, p - minPrice);
        }

        return best;
    }
};
