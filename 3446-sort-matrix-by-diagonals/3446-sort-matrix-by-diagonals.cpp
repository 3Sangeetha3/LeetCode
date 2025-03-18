class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, vector<int>> mpp;
        
        // storing the diagonals
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mpp[i-j].push_back(grid[i][j]);
            }
        }

        // sorting the diagonals
        for(auto &it: mpp){
            if(it.first < 0) {
                // increasing order sorting
                sort(it.second.begin(), it.second.end());
            }else {
                // decresing order sorting
                sort(it.second.begin(), it.second.end(), greater<int>());
            }
        }

        // put them back
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                grid[i][j] = mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }
        return grid;
    }
};