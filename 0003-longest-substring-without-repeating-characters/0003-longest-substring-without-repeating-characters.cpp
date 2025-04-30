class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int Maxlen = 0;
        vector<int> charIdx(128, -1);
        int l =0;
        for(int r=0;r<n;r++){
            if(charIdx[s[r]] >= l){
                l = charIdx[s[r]]+1;
            }

            charIdx[s[r]] = r;
            Maxlen = max(Maxlen, r-l+1);
        }
        return Maxlen;
    }
};