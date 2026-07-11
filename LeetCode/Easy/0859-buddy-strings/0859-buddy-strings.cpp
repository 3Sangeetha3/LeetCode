class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        // Case 1: Strings are already equal
        if (s == goal) {
            vector<int> freq(26, 0);

            for (char ch : s) {
                freq[ch - 'a']++;
                if (freq[ch - 'a'] > 1)
                    return true;
            }

            return false;
        }

        // Case 2: Find mismatched positions
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        if (diff.size() != 2)
            return false;

        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};