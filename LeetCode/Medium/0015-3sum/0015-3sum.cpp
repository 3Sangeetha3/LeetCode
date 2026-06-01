class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        // nums[j] + nums[k] = -nums[i] //Two sum
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int target = -nums[i];
            int j = i+1, k = n-1;
            while(j < k){
                if(nums[j] + nums[k] > target) k--;
                else if(nums[j] + nums[k] < target) j++;
                else{
                    // found triplet
                    ans.insert({nums[i], nums[j], nums[k]});
                    j++;k--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};