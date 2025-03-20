class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=n-3;i>=0;i--){
            // a<b<c
            if(nums[i] + nums[i+1] > nums[i+2]){ //a+b > c
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};