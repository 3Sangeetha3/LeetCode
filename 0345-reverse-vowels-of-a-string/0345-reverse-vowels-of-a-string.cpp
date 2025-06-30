class Solution {
public:
    bool isVowel(char ch){
        static const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowels.count(ch);
    }
    string reverseVowels(string s) {
        int n = s.size();
        int start = 0, end = n-1;
        while(start < end){
            if(!isVowel(s[start])) start++;
            else if(!isVowel(s[end])) end--;
            else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};