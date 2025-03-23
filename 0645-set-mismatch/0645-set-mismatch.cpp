class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int missedNum = -1, repeatedNum = -1;

        for(int i = 0; i < n; i++) {
            if(nums[abs(nums[i]) - 1] < 0) {
                repeatedNum = abs(nums[i]);
            } else {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                missedNum = i + 1;
            }
        }

        return {repeatedNum, missedNum};
    }
};