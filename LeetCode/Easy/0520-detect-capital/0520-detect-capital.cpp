class Solution {
public:
    bool allCapital(string word){
        for(char ch: word){
            if(ch <'A' || ch>'Z'){
                return false;
            }
        }
        return true;
    }
    bool allSmall(string word){
        for(char ch: word){
            if(ch <'a' || ch>'z'){
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(allCapital(word) || allSmall(word) || allSmall(word.substr(1, n))){
            return true;
        }
        return false;
    }
};