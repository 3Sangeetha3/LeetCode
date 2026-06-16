class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char ch: s){
            if(islower(ch)){
                res.push_back(ch);
            }else if(ch == '#'){
                res += res;
            }else if(ch == '%'){
                reverse(res.begin(), res.end());
            }else{
                if(!res.empty()){
                    res.pop_back();
                }
            }
        }
        return res;
    }
};