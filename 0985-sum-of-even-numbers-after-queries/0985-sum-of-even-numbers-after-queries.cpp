class Solution {
public:
    int sumOfEven(vector<int>& nums){
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            if(nums[i] % 2  == 0){
                sum += nums[i];
            }
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> res;

        for(int i=0;i<n;i++){
            int index = queries[i][1];
            int val = queries[i][0];
            nums[index] = nums[index] + val;
            int sum = sumOfEven(nums);
            res.push_back(sum);
        }
        return res;
    }
};