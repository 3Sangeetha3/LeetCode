class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> freq;

        for(int n:nums){
            if(!freq.empty() && freq.contains(n)){
                return true;
                break;
            }
            freq.insert(n);
        }

        return false;
    }
};