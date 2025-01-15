class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> res(n);
        int product = 1;
        for(int i=0;i<n;i++){
            res[i] = product;
            product = product * nums[i];
        }
        int suf = 1;
        for(int i=n-1; i>=0 ;i--){
            res[i] = res[i] * suf;
            suf = suf * nums[i];
        }
        return res;
    }
};