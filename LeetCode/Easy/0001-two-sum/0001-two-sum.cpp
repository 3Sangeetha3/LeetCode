class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> nums_with_idx;

        for(int i=0;i<n;i++){
            nums_with_idx.push_back({nums[i], i});
        }

        sort(nums_with_idx.begin(), nums_with_idx.end());

        int left = 0, right = n-1;
        while(left <= right){
            int sum = nums_with_idx[left].first + nums_with_idx[right].first;

            if(sum > target){
                right--;
            }else if(sum < target){
                left++;
            }else {
                return {nums_with_idx[left].second, nums_with_idx[right].second};
            }
        }
        return {};
    }
};