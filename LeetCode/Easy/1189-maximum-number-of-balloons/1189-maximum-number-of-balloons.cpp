class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = 0;
        vector<int> freq(26, 0);
        for(char ch: text){
            freq[ch - 'a']++;
        }

        int b = freq['b'-'a'];
        int a = freq['a'-'a'];
        int l = freq['l'-'a'];
        int o = freq['o'-'a'];
        int n = freq['n'-'a'];

        ans = min({b, a, l/2, o/2, n});
        return ans;
    }
};