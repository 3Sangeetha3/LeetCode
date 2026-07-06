class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0, l=0;
        vector<int> charIdx(128, -1);

        for(int r=0;r<n;r++){
            if(charIdx[s[r]] >= l){
                l = charIdx[s[r]]+1;
            }

            charIdx[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
        }
        return maxLen;
    }
};