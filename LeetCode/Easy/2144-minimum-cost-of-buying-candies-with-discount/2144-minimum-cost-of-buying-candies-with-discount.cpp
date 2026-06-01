class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int mini_cost = 0;
        sort(cost.begin(), cost.end());

        for(int i=n-1;i>=0;i-=3){
            if(i-1>=0) mini_cost += cost[i] + cost[i-1];
            else mini_cost += cost[i];
        }

        return mini_cost;
    }
};