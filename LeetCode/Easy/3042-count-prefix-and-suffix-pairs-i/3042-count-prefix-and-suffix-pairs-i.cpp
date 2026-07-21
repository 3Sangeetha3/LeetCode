class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2){
        if(str2.starts_with(str1) && str2.ends_with(str1)){
            return true;
        }
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixAndSuffix(words[i], words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};