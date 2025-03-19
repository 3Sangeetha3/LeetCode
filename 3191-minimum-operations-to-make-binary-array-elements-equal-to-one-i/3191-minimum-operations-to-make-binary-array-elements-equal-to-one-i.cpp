class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int flips = 0;
        vector<bool> isFlipped(n, false);
        int flipCountFromPastForCurri = 0;

        for(int i = 0; i < n; i++) {
            if(i >= 3 && isFlipped[i-3] == true){
                flipCountFromPastForCurri--;                     
            }
            
            if(flipCountFromPastForCurri % 2 == nums[i]) {
                if(i+3 > n){
                    return -1;
                }
                flipCountFromPastForCurri++;
                isFlipped[i] = true;
                flips++;
            }
        }

        return flips;
    }
};