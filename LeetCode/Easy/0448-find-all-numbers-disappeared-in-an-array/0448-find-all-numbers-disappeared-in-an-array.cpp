class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int i=0;
        while(i<n){
            int x = nums[i];
            if(nums[i] != nums[x-1]){
                swap(nums[i], nums[x-1]);
            }else i++;
        }

        for(int i=0;i<n;i++){
            int x = nums[i];
            if(x-1 != i) res.push_back(i+1);
        }

        return res;
    }
};