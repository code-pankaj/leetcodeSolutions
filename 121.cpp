class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff;
        int max = 0;
        int low = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(low > prices[i]){
                low  = prices[i];
            }
            else if(low < prices[i]){
                diff = prices[i] - low;
                if(max < diff){
                    max = diff;
                }
            }
        }
        return max;
    }
};