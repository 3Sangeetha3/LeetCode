class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> res;
        for(int i=0;i<n;i++){
            string str = words[i];
            for(int j=0;j<n;j++){
                if(i==j) continue;

                if(words[j].contains(str)){
                    res.push_back(str);
                    break;
                }
            }
        }

        return res;
    }
};