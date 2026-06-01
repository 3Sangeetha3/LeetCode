class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int mini_cost = 0;
        sort(cost.begin(), cost.end(), greater<int>());
        for(int val: cost){
            mini_cost += val;
        }
        for(int i=0; i<n-2; i+=3){
            mini_cost -= cost[i+2];
        }
        return mini_cost;
    }
};