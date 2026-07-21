class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        vector<string> words;

        while(ss >> word){
            words.push_back(word);
        }

        int n = searchWord.size();

        for(int i=0;i<words.size();i++){
            if(words[i].substr(0, n) == searchWord){
                return i+1;
                break;
            }
        }

        return -1;
    }
};