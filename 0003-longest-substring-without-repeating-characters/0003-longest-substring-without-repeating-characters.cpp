class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        vector<int> charIndex(128, -1);
        int l=0;
        for(int r=0;r<n;r++){
            if(charIndex[s[r]] >= l){
                l = charIndex[s[r]] + 1;
            }
            charIndex[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
        }
        return maxLen;
    }
};