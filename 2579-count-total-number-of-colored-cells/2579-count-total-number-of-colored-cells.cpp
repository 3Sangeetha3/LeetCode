class Solution {
public:
    long long coloredCells(int n) {
        long long res = 0;
        res = pow(n,2) + pow(n-1,2);
        return res;
    }
};