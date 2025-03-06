class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        unordered_map<int, int> mpp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mpp[grid[i][j]]++;
            }
        }

        int a=0, b=0;
        for(int num=0;num<=n*n;num++){
            if(!mpp.count(num)) b = num;
            else if(mpp[num] == 2) a = num;
            if(a!=0 && b !=0) break;
        }
        return {a,b};
    }
};