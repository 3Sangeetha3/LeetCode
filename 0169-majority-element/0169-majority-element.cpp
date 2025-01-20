class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int i=0;i<n; i++){
            freq[nums[i]]++;
        }

        int res = 0;
        for(auto it : freq){
            if(it.second > floor(n / 2)){
                res = it.first;
            }
        }
        return res;
    }
};