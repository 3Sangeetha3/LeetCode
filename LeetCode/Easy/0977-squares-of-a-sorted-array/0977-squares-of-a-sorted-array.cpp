class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0, r = n-1, k = n-1;
        while(l <= r){
            int leftele = abs(nums[l]);
            int rightele = abs(nums[r]);

            if(leftele < rightele){
                ans[k--] = rightele * rightele; 
                r--;
            }else{
                ans[k--] = leftele * leftele;
                l++;
            }
        }
        return ans;
    }
};