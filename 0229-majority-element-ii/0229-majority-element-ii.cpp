class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        vector <int> res;
        for(auto it: freq){
            if(it.second > floor(n/3)) res.push_back(it.first);
        }
        return res;
    }
};