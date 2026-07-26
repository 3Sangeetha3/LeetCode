class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        int small1 = INT_MAX, small2 = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i] >= first){
                third = second;
                second = first;
                first = nums[i];
            }else if(nums[i] >= second){
                third = second;
                second = nums[i];
            }else if(nums[i] > third){
                third = nums[i];
            }

            if (nums[i] <= small1) {
                small2 = small1;
                small1 = nums[i];
            }
            else if (nums[i] < small2) {
                small2 = nums[i];
            }
        }

        return max(first * second * third, first * small1 * small2);
    }
};