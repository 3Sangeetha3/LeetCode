class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int num: nums){
            st.insert(num);
        }

        for(int i=1;i<=100;i++){
            int mul = i*k;
            if(!st.contains(mul)) return mul;
        }

        return 101 * k;
    }
};