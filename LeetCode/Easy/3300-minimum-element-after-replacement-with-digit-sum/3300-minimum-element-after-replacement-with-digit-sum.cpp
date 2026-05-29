class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> digitSum;
        for(int i=0;i<n;i++){
            int num = nums[i];
            int sum = 0;
            while(num>0){
                sum += num % 10;
                num /= 10;
            }
            digitSum.push_back(sum);
        }
        sort(digitSum.begin(), digitSum.end());
        return digitSum[0];
    }
};