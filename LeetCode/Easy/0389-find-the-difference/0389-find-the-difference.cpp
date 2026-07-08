class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26, 0);
        char ans;
        for(char ch: t){
            freq[ch - 'a']++;
        }

        for(char ch: s){
            freq[ch-'a']--;
        }

        for(char ch: t){
            if(freq[ch - 'a'] != 0){
                ans = ch;
            }
        }
        return ans;
    }
};