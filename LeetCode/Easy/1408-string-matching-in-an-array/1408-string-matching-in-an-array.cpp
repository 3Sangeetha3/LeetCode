class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        unordered_set<string> st;
        vector<string> res;

        sort(words.begin(), words.end(), [](const string &a, string &b){
            if(a.size() == b.size()) return a<b;
            return a.size() > b.size();
        });

        for(int i=0;i<n;i++){
            string str = words[i];
            if(st.find(str) == st.end()){
                for(int j=0;j<str.size();j++){
                    for(int k=j;k<str.size();k++){
                        st.insert(str.substr(j,k-j+1));
                    }
                }
            }else{
                res.push_back(str);
            }
        }
        return res;
    }
};