class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_ele = 0, count = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                count++;
                max_ele = nums[i];
            }else if(nums[i] == max_ele) count++;
            else count--;
        }
        return max_ele;
    }
};