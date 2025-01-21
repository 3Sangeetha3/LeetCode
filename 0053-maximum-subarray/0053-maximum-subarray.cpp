class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        long long curr_sum = 0;
        long long maxi = LLONG_MIN;

        for(int i=0;i<n;i++){
            curr_sum += nums[i];
            maxi = max(maxi, curr_sum);
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return maxi;
    }
};