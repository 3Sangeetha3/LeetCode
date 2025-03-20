class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> res;
        if( n%2 != 0 ) return {};
        map<int, int> freq;

        sort(changed.begin(), changed.end());
        for(int i=0;i<n;i++){
            freq[changed[i]]++;
        }

        for(int &num: changed){
            int twice = 2 * num;
            if(freq[num] == 0) continue;
            if(freq.find(twice) == freq.end() || freq[twice] == 0){
                return {};
            }
            res.push_back(num);
            freq[num]--;
            freq[twice]--;
        }
    return res;
    }
};