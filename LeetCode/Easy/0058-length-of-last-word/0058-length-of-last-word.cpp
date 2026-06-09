class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        // find first non space char
        int i = n-1, j=n-1;
        while(i>=0 && j>=0 && s[i]== ' '){
            i--;j--;
        }
        while(i>=0 && j>=0 && s[j] != ' '){
            j--;
        }
        return i - j;
    }
};