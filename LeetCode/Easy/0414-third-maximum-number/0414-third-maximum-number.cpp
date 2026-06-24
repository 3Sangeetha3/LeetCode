class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        vector<int> arr;
        for(int num: nums){
            st.insert(num);
        }

        for(auto& it: st){
            arr.push_back(it);
        }

        sort(arr.begin(), arr.end(), greater<int> ());

        if(arr.size()<3) return arr[0];
        else return arr[2];
    }
};