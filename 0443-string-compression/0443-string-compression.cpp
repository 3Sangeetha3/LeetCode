class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0, i = 0;

        while(i<n){
            char curr_char = chars[i];
            int count = 0;

            // finding the count of the duplicates
            while(i<n && chars[i] == curr_char){
                count++;
                i++;
            }

            // Assign the values
            chars[idx] = curr_char;
            idx++;

            if(count > 1){
                string count_str = to_string(count);
                for(char &ch: count_str){
                    chars[idx] = ch;
                    idx++;
                }
            }
        }

        return idx;
    }
};