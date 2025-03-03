class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res(n);
        int countLess = 0, countEqual = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < pivot) countLess++;
            if(nums[i] == pivot) countEqual++;
        }

        int i = 0, j = countLess, k = countLess + countEqual;
        for(int ele=0;ele<n;ele++){
            if(nums[ele] < pivot){
                res[i++] = nums[ele];
            }else if(nums[ele] > pivot){
                res[k++] = nums[ele];
            }else {
                res[j++] = nums[ele];
            }
        }
        return res;
    }
};