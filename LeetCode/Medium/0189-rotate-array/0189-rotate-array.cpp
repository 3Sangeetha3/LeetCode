class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n, 0);

        k %= n;
        
        for(int i=0;i<n;i++){
            if(k+i<n){
                res[k+i] = nums[i];
            }
            else {
                res[k+i-n] = nums[i];
            }
        }
        nums = res;
    }
};