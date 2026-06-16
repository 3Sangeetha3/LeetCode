class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = n * (n +1)/2;
        int sum = 0;
        for(int num: nums){
            sum += num;
        }

        return total_sum - sum;
    }
};