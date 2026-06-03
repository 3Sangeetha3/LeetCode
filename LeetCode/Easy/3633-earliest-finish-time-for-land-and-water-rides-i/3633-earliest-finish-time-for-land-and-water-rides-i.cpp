class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size(), m = waterStartTime.size();
        int result = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int landFinishTime = landStartTime[i] + landDuration[i];
                int landWater = max(landFinishTime, waterStartTime[j]) + waterDuration[j];
                result = min(result, landWater);
                
                int waterFinishTime = waterStartTime[j] + waterDuration[j];
                int waterLand = max(waterFinishTime, landStartTime[i]) + landDuration[i];
                result = min(result, waterLand);
            }
        }
        return result;
    }
};