class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> lesser;
        vector<int> equal;
        vector<int> greater;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(nums[i] < pivot){
                lesser.push_back(nums[i]);
            }else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }else {
                greater.push_back(nums[i]);
            }
        }

        for(int i=0;i<lesser.size();i++){
            res.push_back(lesser[i]);
        }
        for(int i=0;i<equal.size();i++){
            res.push_back(equal[i]);
        }
        for(int i=0;i<greater.size();i++){
            res.push_back(greater[i]);
        }
        return res;
    }
};