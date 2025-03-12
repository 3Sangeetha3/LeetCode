class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        int maxLength = 0;
        if(n==1) return true;
        for(int i=0;i<n;i++){
           if(i > maxLength) return false;
           maxLength = max(maxLength, i+nums[i]);
           if(maxLength >= n-1) return true;
        }
        return false;
    }
};