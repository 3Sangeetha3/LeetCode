class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first_str = strs[0];
        for(int i=0;i<first_str.length();i++){
            string prefix = first_str.substr(0, i+1);
            for(int j=1;j<strs.size();j++){
                if(strs[j].find(prefix) != 0){
                    return first_str.substr(0, i);
                }
            }
        }
        return first_str;
    }
};