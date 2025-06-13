class Solution {
public:
    int maxArea(vector<int>& height) {
        int MW =0;
        int lp =0;
        int rp = height.size() - 1;
        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[lp],height[rp]);
            int currWt = w*ht;
            MW = max(MW,currWt);
            height[lp]<height[rp]?lp++:rp--;
        }
        return MW;
    }
};