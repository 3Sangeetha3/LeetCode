class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx;
        int sum = 0, index;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                sum = nums[i] + nums[j];
                if (sum == target) {
                    idx.push_back(i);
                    idx.push_back(j);
                }
            }
        }
        return idx;
    }
};