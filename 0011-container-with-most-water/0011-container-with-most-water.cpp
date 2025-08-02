class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int width= r-l;
            int ht=min(height[l],height[r]);
            int area= width*ht;
            ans=max(ans,area);
            height[l]>height[r]?r--:l++;
        }  
        return ans;      
    }
};