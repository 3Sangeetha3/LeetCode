class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        unordered_set<int> st;

        for(int num: nums){
            st.insert(num);
        }

        if(n == 1) return nums[0]+1;

        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]+1){
                while(st.contains(sum)){
                    sum++;
                }
                return sum;
            }else {
                sum += nums[i];
            }
        }
        return sum;
    }
};