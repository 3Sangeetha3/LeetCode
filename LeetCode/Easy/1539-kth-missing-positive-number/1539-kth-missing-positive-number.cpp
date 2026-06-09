class Solution {
public:
    int checkExists(vector<int>& arr, int ele){
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == ele){
                return 1;
            }else if(arr[mid] > ele){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return 0;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int end = arr[n-1] + k;
        int cnt = 0;
        for(int i=1;i<=end;i++){
            if(!checkExists(arr, i)){
                cnt++;
            }
            if(cnt == k){
                return i;
            }
        }
        return 0;
    }
};