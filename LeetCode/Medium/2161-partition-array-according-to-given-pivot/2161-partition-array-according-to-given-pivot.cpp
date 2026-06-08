class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res;
        vector<int> left;
        vector<int> equal;
        vector<int> right;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }else if(nums[i]>pivot){
                right.push_back(nums[i]);
            }else{
                equal.push_back(nums[i]);
            }
        }
        for(int val: left){
            res.push_back(val);
        }
        for(int val: equal){
            res.push_back(val);
        }
        for(int val: right){
            res.push_back(val);
        }

        return res;
    }
};