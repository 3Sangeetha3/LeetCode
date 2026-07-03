class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int j = n-1, i=n-1;
        while(j>=0 && s[j] == ' '){
            j--;i--;
        }

        while(i>=0 && s[i] != ' '){
            i--;
        }
        return j-i;
    }
};