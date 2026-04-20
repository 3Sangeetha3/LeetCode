class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int complement = 0;

        for(int i=0;i<n;i++){
            complement = target - nums[i];

            if(mp.find(complement) != mp.end()){ //exisits in map
                return { mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};