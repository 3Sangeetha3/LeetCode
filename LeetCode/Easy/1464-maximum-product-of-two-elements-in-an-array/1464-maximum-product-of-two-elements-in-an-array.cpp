class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_p = 0;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                max_p = max(max_p, (nums[i]-1) * (nums[j]-1));
            }
        }

        return max_p;
    }
};