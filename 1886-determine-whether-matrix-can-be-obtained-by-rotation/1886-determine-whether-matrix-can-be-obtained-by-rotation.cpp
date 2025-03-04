class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat, int n){
        // transpose
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        // Reverse rows
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        return mat;
    }

    bool checkEqual(vector<vector<int>>& mat, vector<vector<int>>& target, int n) {
        for(int i=0;i<n;i++){
            if(mat[i] != target[i]) return false;
        }
        return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        if(mat == target) return true;

        for(int i=0;i<3;i++){
            rotate(mat, n);
            if(checkEqual(mat, target, n)) return true;
        }
        return false;
    }
};