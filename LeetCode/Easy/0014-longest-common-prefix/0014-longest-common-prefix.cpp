class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string first_str = strs[0], last_str = strs[n-1];
        int len = min(first_str.size(), last_str.size());
        for(int i=0;i<len;i++){
            if(first_str[i] != last_str[i]){
                return first_str.substr(0, i);
            }
        }
        return first_str.substr(0, len);
    }
};