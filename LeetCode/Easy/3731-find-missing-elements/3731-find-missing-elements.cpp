class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        vector<int> ans;
        
        for(int num: nums){
            st.insert(num);
        }

        int s = *st.begin();
        int l = *st.rbegin();

        for(int i=s;i<=l;i++){
            if(!st.contains(i)){
                ans.push_back(i);
            }
        }

        return ans;
    }
};