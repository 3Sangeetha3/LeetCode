class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        for(string str: strs){
            vector<int> freq(26, 0);
            for(char ch: str){
                freq[ch-'a']++;
            }
            
            string key = "";
            for(int num: freq){
                key += to_string(num)+"#";
            }
            mp[key].push_back(str);
        }

        for(auto &it: mp){
            res.push_back(it.second);
        }
        return res;
    }
};