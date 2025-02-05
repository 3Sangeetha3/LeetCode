class Solution {
public:
    void solution(int id, vector<int>& nums, vector<vector<int>>& ans){
        int n = nums.size();
        if(id == n) { ans.push_back(nums); return;}
        for(int i=id; i<n; i++){
            swap(nums[id], nums[i]);
            solution(id+1, nums, ans);
            swap(nums[i], nums[id]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solution(0, nums, ans);
        return ans;
    }
};