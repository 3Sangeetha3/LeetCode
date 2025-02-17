class Solution {
public:
    vector<vector<int>> res;
    void twoSum(vector<int> &nums, int idx, int target){
        int n = nums.size();
        int i=idx, j=n-1;
        while(i<j){
            if(nums[i] + nums[j] > target){
                j--;
            }else if(nums[i] + nums[j] < target){
                i++;
            }else {
                while(i<j && nums[i] == nums[i+1]) i++;
                while(i<j && nums[j] == nums[j-1]) j--;
                res.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return {};

        //sorting
        sort(nums.begin(), nums.end());

        //fixing one element : n1
        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue; //remove duplicates
            int n1 = nums[i];
            int target = -n1;

            twoSum(nums, i+1, target); //Find n2, n3 whose sum = -n1
        }
        return res;
    }
};