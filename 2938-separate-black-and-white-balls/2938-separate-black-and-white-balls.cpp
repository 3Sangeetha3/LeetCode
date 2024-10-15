class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();

        long long swap  = 0;
        int white = 0;

        for(int i = n-1; i >= 0; i--) {
            if(s[i] == '1') { //move black to right
                swap += white;
            } else {
                white++;
            }
        }

        return swap;
    }
};