class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer moore's voting algorithm
        int n = nums.size();
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                count++;
                ans = nums[i];
            }else if(nums[i] == ans) count++;
            else count--;
        }
        return ans;
        // int cnt = 0;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == ans) cnt++;
        // }
        // if(cnt > floor(n/2)) return ans;
        // else return -1;
    }
};