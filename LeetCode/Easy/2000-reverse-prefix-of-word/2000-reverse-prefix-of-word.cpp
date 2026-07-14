class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int ch_i = word.find(ch);
        reverse(word.begin(), word.begin() + ch_i + 1);

        return word;
    }
};