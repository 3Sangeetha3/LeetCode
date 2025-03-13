class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, 1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j]){
                    memo[i] = max(memo[i], memo[j]+1);
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans, memo[i]);
        }
        return ans;
    }
};