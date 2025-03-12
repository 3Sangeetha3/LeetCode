class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int curr = n, prev = 3, pp=2;
        for(int i=3;i<n;i++){
            curr = prev + pp;
            pp = prev;
            prev = curr;
        }
        return curr;
    }
};