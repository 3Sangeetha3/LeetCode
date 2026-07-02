class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word = "", res = "";

        while(ss>>word){
            reverse(word.begin(), word.end());
            res += word + " ";
        }

        return res.substr(0, res.size()-1);
    }
};