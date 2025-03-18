class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int, vector<int>> mpp;

        // storing the diagonal elements
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mpp[i-j].push_back(mat[i][j]);
            }
        }

        // sorting the diagonal elements
        for(auto &it: mpp){
            sort(it.second.begin(), it.second.end());
        }

        // put them back in sorted order
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                mat[i][j] = mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }

        return mat;
    }
};