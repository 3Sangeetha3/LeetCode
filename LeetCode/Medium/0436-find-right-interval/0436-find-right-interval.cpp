class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        map<int, int> starts;
        vector<int> ans;
        for(int i=0;i<n;i++){
            starts[intervals[i][0]] = i;
        }

        for(int i=0;i<n;i++){
            auto it = starts.lower_bound(intervals[i][1]);
            if(it == starts.end()){
                ans.push_back(-1);
            }else{
                ans.push_back(it->second);
            }
        }

        return ans;
    }
};