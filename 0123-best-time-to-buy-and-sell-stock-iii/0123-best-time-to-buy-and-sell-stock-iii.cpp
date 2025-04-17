class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if(n==0) return 0;
        int firstBuy = INT_MIN, firstSell = 0;
        int secondBuy = INT_MIN, secondSell = 0;

        for(int price: prices){
            firstBuy = max(firstBuy, -price);
            firstSell = max(firstSell, firstBuy + price);
            secondBuy = max(secondBuy, firstSell - price);
            secondSell = max(secondSell, secondBuy + price);
        }
        return secondSell;
    }
};