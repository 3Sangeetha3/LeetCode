class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        map<int, vector<int>> diagonals;
        vector<int> res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diagonals[i+j].push_back(mat[i][j]);
            }
        }

        for(auto &it: diagonals){
            if(it.first % 2 == 0){
                reverse(it.second.begin(), it.second.end());
            }
            for(int num : it.second){
                res.push_back(num);
            }
        }
        return res;
    }
};