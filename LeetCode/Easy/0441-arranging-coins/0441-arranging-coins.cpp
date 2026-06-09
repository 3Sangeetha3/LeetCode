class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = n;
        while(low <= high){
            long long int mid = low + (high - low) / 2;
            long long int sum = mid * (mid + 1) / 2;
            if(sum <= n){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};