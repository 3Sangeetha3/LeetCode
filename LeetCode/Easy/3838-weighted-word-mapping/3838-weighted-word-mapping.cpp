class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(string s: words){
            int count = 0;
            for(char ch: s){
                count += weights[ch - 'a'];
            }
            int mod = count % 26;
            res += ('z' - mod);
        }
        return res;
    }
};