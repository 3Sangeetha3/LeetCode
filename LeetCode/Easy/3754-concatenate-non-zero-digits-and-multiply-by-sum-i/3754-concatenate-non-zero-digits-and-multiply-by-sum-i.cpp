class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x = 0;
        int sum = 0;
        for(char ch : s){
            if(ch != '0'){
                int digit = ch - '0';
                sum += digit;
                x = x * 10 + digit;
            }
        }
        return x * sum;
    }
};