class Solution {
public:
    bool canEatAll(vector<int>& piles, int mid, int h){
        int actualHours = 0;
        for(int &i : piles){
            actualHours += i/mid;
            if(i%mid != 0) actualHours++;
        }
        return actualHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());

        while(l<r){
            int mid = l + ( r - l ) / 2;
            if(canEatAll(piles, mid, h)){
                r = mid;
            }else l = mid + 1;
        }
        return l;
    }
};