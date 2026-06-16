class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char ch: s){
            if(islower(ch)){
                res += ch;
            }else if(ch == '#'){
                string temp = res;
                res += temp;
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