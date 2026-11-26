class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        vector<int> res;

        for(int n: nums){
            st.insert(n);
        }

        for(int i=1;i<=n;i++){
            if(!st.contains(i)) res.push_back(i);
        }

        return res;
    }
};