class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        int l=0, r=n-1;

        while(l<=r){
            if(ans[l]%2 != 0 && ans[r]%2 == 0){
                swap(ans[l], ans[r]);
                l++; r--;
            }else if(ans[l]%2 == 0 && ans[r] % 2 == 0){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};