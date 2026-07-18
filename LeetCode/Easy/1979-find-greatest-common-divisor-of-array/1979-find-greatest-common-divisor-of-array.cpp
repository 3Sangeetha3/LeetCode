class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mn = 1000, mx = 1;
        int gcd = 1;
        for(int i=0;i<n;i++){
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        for(int i=1;i<=mn;i++){
            if(mn % i == 0 && mx % i == 0){
                gcd = max(gcd, i);
            }
        }

        return gcd;
    }
};