class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string first = strs[0],last = strs[n-1];
        int len = min(first.size(), last.size());

        for(int i=0;i<len;i++){
            if(first[i] != last[i]){
                return first.substr(0,i);
            }
        }
        
        return first.substr(0, len);
    }
};