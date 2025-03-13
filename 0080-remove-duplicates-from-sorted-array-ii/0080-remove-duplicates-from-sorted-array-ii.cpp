class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count=0, current = 1;
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                count=0;
                nums[current++] = nums[i];
            }else {
                count++;
                if(count <= 1) nums[current++] = nums[i];
            }
        }
        return current;
    }
};