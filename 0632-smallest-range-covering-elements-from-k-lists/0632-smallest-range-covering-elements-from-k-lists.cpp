class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();

        vector<int> list(k, 0);                //{0, 0, 0, ...}
        vector<int> result = {-1000000, 1000000}; //{a, b}
        while (true) {
            int minElem = INT_MAX;
            int minElemIdx = 0;
            int maxElem = INT_MIN;

            for (int i = 0; i < k; i++) {
                int listIdx = i;
                int ElemIdx = list[i];
                int element = nums[listIdx][ElemIdx];

                if (element < minElem) {
                    minElem = element;
                    minElemIdx = listIdx;
                }

                maxElem = max(maxElem, element);
            }

            // range (minElem , maxElem)
            if (maxElem - minElem < result[1] - result[0]) {
                result[0] = minElem;
                result[1] = maxElem;
            }

            // Now shorten the range by moving the minElement index
            int nextIdx = list[minElemIdx] + 1;
            if (nextIdx >= nums[minElemIdx].size()) {
                break;
            }
            list[minElemIdx] = nextIdx;
        }
        return result;
    }
};