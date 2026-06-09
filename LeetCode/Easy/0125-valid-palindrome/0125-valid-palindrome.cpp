class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char ch : s){
            if(isalnum(ch)){
                str += tolower(ch);
            }
        }
        int i =0, j = str.size()-1;
        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};