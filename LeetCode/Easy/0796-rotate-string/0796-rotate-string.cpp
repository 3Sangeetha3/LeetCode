class Solution {
public:
    bool rotateString(string s, string goal) {
        string circle_s = s+s;
        int n = s.size();
        for(int i=0;i<n;i++){
            string str = circle_s.substr(i,n);
            if(str == goal) return true;
        }
        return false;
    }
};