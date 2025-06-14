class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabets(26, 0);
        
        for(char &ch: sentence){
            int index = ch - 'a';
            alphabets[index]++;
        }
        
        for(int &count: alphabets){
            if(count == 0) return false;
        }
        return true;
    }
};