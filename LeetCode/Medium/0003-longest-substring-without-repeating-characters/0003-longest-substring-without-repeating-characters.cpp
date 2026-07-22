class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> lastSeen(128, -1);
        int max_len = 0;
        int l = 0;

        for(int r=0;r<n;r++){
            if(lastSeen[s[r]] >= l){
                l = lastSeen[s[r]]+1;
            }
            lastSeen[s[r]] = r;
            max_len = max(max_len, r-l+1);
        }

        return max_len;
    }
};