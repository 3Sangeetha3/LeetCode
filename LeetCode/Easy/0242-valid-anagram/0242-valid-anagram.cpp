class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        unordered_map<char, int> mp;
        for(char ch: s){
            mp[ch]++;
        }

        for(char ch: t){
            if(mp.count(ch) > 0){
                mp[ch]--;
            }else{
                return false;
            }
        }

        for(int i=0;i<mp.size();i++){
            if(mp[i] != 0){
                return false;
            }
        }

        return true;
    }
};