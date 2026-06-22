class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int i=0, j=n-1;
        
        while(i<=j){
            int w = j-i;
            int h = min(height[i], height[j]);
            maxWater = max(maxWater, w*h);
            if(height[i] < height[j]){
                i++;
            }else j--;
        }
        return maxWater;
    }
};