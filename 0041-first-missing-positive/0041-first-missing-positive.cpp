class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=1;i<=nums.size();i++){
            if(!s.count(i)) return i;
        }
        return nums.size()+1;
    }
};