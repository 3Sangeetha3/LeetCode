class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int count = 0;
        unordered_map<char, int> mp;

        for(int i=0;i<n;i++){
            // if lowercase char then update the index. 
            if(islower(word[i])){
                mp[word[i]] = i;
            }
            // else uppercase char then store first occurence of the index
            else{
                if(mp.find(word[i]) == mp.end()){ //char does not exist in mp.
                    mp[word[i]] = i;
                }
            }   
        }

        for(char ch='a'; ch<='z'; ch++){
            if(mp.find(ch) != mp.end() && mp.find(ch-32) != mp.end() && mp[ch] < mp[ch-32]) count++;
        }
        return count;
    }
};