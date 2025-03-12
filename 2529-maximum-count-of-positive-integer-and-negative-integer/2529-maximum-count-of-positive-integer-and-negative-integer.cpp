class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > 0){
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }

        int countPos = n - low;

        low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid]<0){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }

        int countNeg = high + 1;

        return max(countNeg, countPos);

    }
};