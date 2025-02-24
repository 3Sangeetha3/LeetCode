class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MIN;
        if(n == 1) return 0;
        for(int i=1;i<n-1;i++){
            max_diff = max(max_diff, nums[i+1] - nums[i]);
        }
        return max_diff;
    }
};