class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        vector<int> res;
        int c1 = 0, c2 = 0, ans1 = 0, ans2=2;
        for(int i=0;i<n;i++){
           if(c1 == 0 && nums[i] != ans2){
                c1++;
                ans1 = nums[i];
           }
           else if(c2 == 0 && nums[i] != ans1){
                c2++;
                ans2 = nums[i];
           }
           else if(nums[i] == ans1) c1++;
           else if(nums[i] == ans2) c2++;
           else c1--, c2--; 
        }

        int cnt1 = 0, cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i] == ans1) cnt1++;
            if(nums[i] == ans2) cnt2++;
        }
        if(cnt1 > n/3) res.push_back(ans1);
        if(cnt2 > n/3) res.push_back(ans2);
        return res;
    }
};