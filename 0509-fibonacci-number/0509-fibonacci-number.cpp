class Solution {
public:
    //dynamic programming 
    int fib(int n) {
        if(n <= 1) return n;
        int previous = 1, pp = 0, curr = 0;
        for(int i=2;i<=n;i++){
            curr = previous + pp;
            pp = previous;
            previous = curr;
        }
        return curr;
    }
};