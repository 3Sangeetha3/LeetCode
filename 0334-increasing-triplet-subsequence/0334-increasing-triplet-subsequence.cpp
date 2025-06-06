class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int num1 = INT_MAX, num2 = INT_MAX, num3 = 0;
        for(int i=0;i<n;i++){
            num3 = nums[i];
            if(num3 <= num1){
                num1 = num3;
            }else if(num3 <= num2){
                num2 = num3;
            }else {
                return true;
            }
        }
        return false;
    }
};