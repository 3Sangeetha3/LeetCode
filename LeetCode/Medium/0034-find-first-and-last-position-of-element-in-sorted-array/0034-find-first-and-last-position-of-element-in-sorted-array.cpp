class Solution {
public:
    int findFirstPosition(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0, high = n-1;
        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                res = mid;
                high = mid-1;
            }else if(nums[mid] > target){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return res;
    }
    int findLastPosition(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0, high = n-1;
        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                res = mid;
                low = mid+1;
            }else if(nums[mid] > target){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        res[0] = findFirstPosition(nums, target);
        res[1] = findLastPosition(nums, target);
        return res;
    }
};