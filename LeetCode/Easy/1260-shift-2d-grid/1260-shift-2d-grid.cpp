class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size(), cols = grid[0].size();
        int n = rows * cols;
        vector<int> arr(n);

        int idx = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                arr[idx++] = grid[i][j];
            }
        }

        k%=n;
        reverse(arr.begin(), arr.begin()+(n-k));
        reverse(arr.begin()+(n-k), arr.end());
        reverse(arr.begin(), arr.end());

        for(int i=0;i<n;i++){
            int row = i/cols;
            int col = i%cols;
            grid[row][col] = arr[i];
        }

        return grid;
    }
};