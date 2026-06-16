class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 0);
        vector<int> res;
        for(int i=0;i<n;i++){
            count[nums[i]-1]++;
        }

        for(int i=0;i<n;i++){
            if(count[i]==0) res.push_back(i+1) ;
        }
        return res;
    }
};