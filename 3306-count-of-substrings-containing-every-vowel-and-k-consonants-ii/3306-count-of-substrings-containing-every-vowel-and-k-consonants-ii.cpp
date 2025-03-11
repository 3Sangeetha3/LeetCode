class Solution {
public:
    bool isVowel(char &ch){
        return ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u';
    }
    long long countOfSubstrings(string word, int k) {
        int n = word.size();

        unordered_map<char, int> mp;
        
        // Pre compute to find the next occurenece of the consonant
        vector<int> nextConsonant(n);
        int lastConsIdx = n;
        for(int i=n-1;i>=0;i--){
            nextConsonant[i] = lastConsIdx;
            if(!isVowel(word[i])){
                lastConsIdx = i;
            }
        }

        int i=0, j=0, consCount = 0;
        long long count = 0;
        while(j<n){
            char ch = word[j];
            if(isVowel(ch)){
                mp[ch]++;
            }else {
                consCount++;
            }

            while(consCount > k){
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch] == 0) mp.erase(ch);
                }else {
                    consCount--;
                }
                i++;
            }

            while(i< n && mp.size() == 5 && consCount == k){
                int idx = nextConsonant[j];
                count += idx - j;
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch] == 0) mp.erase(ch);
                }else {
                    consCount--;
                }
                i++;
            }
            j++;
        }
        return count;
    }
};