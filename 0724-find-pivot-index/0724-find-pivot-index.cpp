class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left_sum = 0;
        int right_sum = 0;
        for(int i=1;i<n;i++){
            right_sum += nums[i];
        }
        int i=0;
        while(i<n){
            int curr = nums[i];
            if(left_sum == right_sum){
                return i;
            }
            left_sum += curr;
            i++;
            if(i<n){
                right_sum -= nums[i];
            }
        }
        return -1;
    }
};