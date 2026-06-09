class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int end = arr[n-1] + k;
        int cnt = 0;
        for(int i=1;i<=end;i++){
            if(count(arr.begin(), arr.end(), i) == 0){
                cnt++;
            }
            if(cnt == k){
                return i;
            }
        }
        return 0;
    }
};