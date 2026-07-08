class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int c_count = 0;
        for(char ch: word){
            if(ch >= 'A' && ch <= 'Z')
            c_count++;
        }

        if(c_count == n || c_count == 0 || (c_count == 1  && isupper(word[0]))) return true;
        return false;
    }
};