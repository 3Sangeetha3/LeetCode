class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int left_sum = 0, right_sum = 0;
        for(int i=1;i<n;i++) right_sum += nums[i];
        
        int i=0;
        while(i<n){
            if(left_sum == right_sum){
                return i;
            }
            if(i == n - 1) break;
            left_sum += nums[i];
            i++;
            right_sum -= nums[i];
        }
        return -1;
    }
};