class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> elements(nums1.begin(), nums1.end());
        unordered_set<int> res;
        vector<int> ans;
        for(int num: nums2){
            if(elements.count(num)){
                res.insert(num);
            }
        }

        for(auto &it: res){
            ans.push_back(it);
        }
        return ans;
    }
};