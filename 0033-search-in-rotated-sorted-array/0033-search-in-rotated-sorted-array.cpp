class Solution {
public:
    int findPivot(vector<int> &nums){
        int low = 0, high = nums.size()-1;

        while(low < high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        return low;
    }
    int binarySearch(int low, int high, vector<int> &nums, int target){
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return -1;

        int pivot = findPivot(nums);

        int idx = binarySearch(0, pivot-1, nums, target);
        if(idx != -1){
            return idx;
        }

        idx = binarySearch(pivot, n-1, nums, target);
        return idx;
    }
};