class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sq;

        for(int num: nums){
            sq.push_back(num*num);
        }
        sort(sq.begin(), sq.end());
        return sq;
    }
};