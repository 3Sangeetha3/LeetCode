class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low <= high){
            long long int mid = low + (high - low)/2;
            if((mid * mid) <= x){
                low = mid+1;
            }else {
                high = mid -1;
            }
        }
    return high;
    }
};