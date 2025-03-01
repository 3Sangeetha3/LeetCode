class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0]++;
        int count = 0;
        int currSum = 0;
        for(int i=0;i<n;i++){
            currSum += nums[i];
            if(mpp.find(currSum-k) != mpp.end()){
                count += mpp[currSum-k];
            }
            mpp[currSum]++;
        }
        return count;
    }
};