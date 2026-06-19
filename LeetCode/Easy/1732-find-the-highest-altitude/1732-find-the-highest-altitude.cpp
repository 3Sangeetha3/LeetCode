class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude(n+1,0);
        int highestAltitude = 0;
        for(int i=1;i<=n;i++){
            altitude[i] = gain[i-1] + altitude[i-1];
            highestAltitude = max(highestAltitude, altitude[i]);
        }
        return highestAltitude;
    }
};