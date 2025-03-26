class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;
        // O(m*n)
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                arr.push_back(grid[i][j]);
            }
        }
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int target = arr[n/2];
        int res = 0;
        
        for(int &num: arr){
            if(num % x != target % x){
                return -1;
            }
            res += abs(target - num) / x;
        }

        return res;
    }
};