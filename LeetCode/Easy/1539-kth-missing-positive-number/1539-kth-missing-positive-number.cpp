class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0, num = 1;
        while(k>0){
            if(i<arr.size() && num == arr[i]){
                i++;
            }else{
                k--;
                if (k == 0) {
                    return num;
                }
            }
            num++;
        }
        return num;
    }
};