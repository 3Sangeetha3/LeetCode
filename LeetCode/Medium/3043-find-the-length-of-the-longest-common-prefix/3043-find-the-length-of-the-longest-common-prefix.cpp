class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(), m = arr2.size();
        int max_length = 0;
        unordered_set<int> prefixes;

        for(int i=0;i<n;i++){
            int num = arr1[i];
            while(num > 0){
                prefixes.insert(num);
                num /= 10;
            }
        }

        for(int i=0;i<m;i++){
            int num = arr2[i];
            while(num > 0){
                int prefix = (num);
                if(prefixes.count(prefix)){
                    max_length = max(max_length, (int)to_string(prefix).length());
                    break;
                }
                num /= 10;
            }
        }

        return max_length;
    }
};