class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Brute force 
        int n = nums.size();
        vector<int> nonZero(n, 0);

        int idx = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                nonZero[idx++] = nums[i];
            }
        }
        nums = nonZero;
    }
};