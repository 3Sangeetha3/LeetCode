class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        map<int, int> mpp;
        vector<vector<int>> res;
        for(int i=0;i<m;i++){
            int id = nums1[i][0];
            int val = nums1[i][1];

            mpp[id] += val;
        }
        for(int i=0;i<n;i++){
            int id = nums2[i][0];
            int val = nums2[i][1];

            mpp[id] += val;
        }
        for(auto &it: mpp){
            res.push_back({it.first, it.second});
        }
        return res;
    }
};