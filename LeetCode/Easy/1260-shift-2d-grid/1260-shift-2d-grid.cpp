class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size(), cols = grid[0].size();
        int n = rows * cols;
        k%=n;
        if(k==0) return grid;
        
        auto reverse = [&](int i, int j) {
            while(i<j){
                swap(grid[i/cols][i%cols], grid[j/cols][j%cols]);
                i++;
                j--;
            }
        };

        reverse(0, n-k-1);
        reverse(n-k, n-1);
        reverse(0, n-1);

        return grid;
    }
};