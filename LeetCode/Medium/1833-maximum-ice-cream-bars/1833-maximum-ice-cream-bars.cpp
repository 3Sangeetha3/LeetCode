class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum = 0, count = 0;
        for(int cost: costs){
            if(cost <= coins){
                sum += cost;
                count++;
                coins-=cost;
            }
        }
        return count;
    }
};