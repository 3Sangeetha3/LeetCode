class Solution {
public:
    int maxArea(vector<int>& height) {
        // Two pointer and greedy approach
        int n = height.size();
        int i=0, j=n-1;
        int maxWater = 0;
        while(i<j){
            int w = j-i;
            int h = min(height[i], height[j]);
            maxWater = max(maxWater, w*h);
            if(height[i] > height[j]) j--;
            else i++;
        }
        return maxWater;
    }
};