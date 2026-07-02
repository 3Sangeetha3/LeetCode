class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0;
        string res = "";

        for(int j=0;j<=n;j++){
            if(j==n || s[j] == ' '){
                string str = s.substr(i, j-i);
                reverse(str.begin(), str.end());
                res += str;
                if(j!=n) res += " ";
                i=j+1;
            }
        }

        return res;
    }
};