class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int num: nums){
            string s = to_string(num);
            int sum = 0;
            for(char ch : s){
                sum += ch - '0';
            }
            ans = min(ans, sum);
        }
    return ans;
    }
};