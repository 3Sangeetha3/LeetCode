class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        int start = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                words.push_back(
                    s.substr(start, i-start)
                );

                start = i + 1;
            }
        }

        words.push_back(s.substr(start));

        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;
        if(pattern.size() != words.size()) return false;

        for(int i=0;i<pattern.size();i++){
            if(mp1.find(pattern[i]) == mp1.end()){
                mp1[pattern[i]] = i;
            }
            if(mp2.find(words[i]) == mp2.end()){
                mp2[words[i]] = i;
            }
            if(mp1[pattern[i]] != mp2[words[i]]){
                return false;
            }
        }

        return true;
    }
};