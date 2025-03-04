class Solution {
public:
    bool checkPowersOfThree(int n) {
        int p = 16;
        while(n>0){
            int power = pow(3,p);
            if(n >= power){
                n = n - power;
            }
            if(n >= power) return false;
            p--;
        }
        return true;
    }
};