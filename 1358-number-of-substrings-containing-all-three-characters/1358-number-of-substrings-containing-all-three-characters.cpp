class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> map(3, 0);

        int res = 0, i=0, j=0;
        while(j<n){
            char ch = s[j];
            map[ch - 'a']++;

            while(map[0] > 0 && map[1] > 0 && map[2] > 0){
                res += (n-j);
                map[s[i] - 'a']--;
                i++;
            }
            j++;
        }
        return res;
    }
};