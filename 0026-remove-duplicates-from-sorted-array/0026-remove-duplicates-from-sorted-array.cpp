class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        map<int, int> unique;
        for(int i=0;i<n;i++){
            unique[nums[i]]++;
        }
        int index = 0;
        for (auto it : unique) {
            nums[index++] = it.first;
        }
        return unique.size();
    }
};