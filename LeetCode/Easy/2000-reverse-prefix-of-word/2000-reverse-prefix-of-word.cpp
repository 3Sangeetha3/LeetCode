class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int ch_i = 0;
        for(int i=0;i<n;i++){
            if(word[i] == ch){
                ch_i = i;
                break;
            }
        }

        reverse(word.begin(), word.begin() + ch_i + 1);

        return word;
    }
};