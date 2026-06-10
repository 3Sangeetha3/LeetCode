class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string firstStr = strs[0], lastStr = strs[strs.size()-1];
        string res = "";
        for(int i=0;i<firstStr.size();i++){
            if(firstStr[i] != lastStr[i]){
                res = firstStr.substr(0,i);
                break;
            }
            res = firstStr.substr(0, i+1);
        }
        return res;
    }
};