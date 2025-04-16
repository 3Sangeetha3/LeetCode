class Solution {
public:
    int firstPosition(vector<int>& nums, int target){
        int n = nums.size();
        int res = -1;

        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                res = mid;
                high = mid - 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else {
                high = mid -1;
            }
        }
        return res;
    }
    int lastPosition(vector<int> &nums, int target){
        int n = nums.size();
        int res = -1;

        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                res = mid;
                low = mid + 1;
            }else if(nums[mid] > target){
                high = mid -1;
            }else {
                low = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res(2, -1);
        res[0] = firstPosition(nums, target);
        res[1] = lastPosition(nums, target);
        return res;
    }
};