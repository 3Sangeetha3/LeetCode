class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() - 1;
        int low = 0, high = n, mid = 0;

        while(mid <= high){
            if(nums[mid] == 2){
                swap(nums[mid], nums[high]); 
                high--;
            }else if(nums[mid] == 1){
                mid++;
            }else {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
        }
    }
};