class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int count = 0;
        unordered_set<int> ascii(word.begin(), word.end());
        // for(int i=0;i<n;i++){
        //     ascii.insert(word[i]);
        //     cout<<word[i];
        // }

        for(char ch='a'; ch<='z'; ch++){
            if(ascii.count(ch) && ascii.count(ch - 32)) count++;
        }
        return count;
    }
};