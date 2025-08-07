class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;int end=nums.size()-1;int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){//left side search kara
                end=mid-1;
            }else{//nums[mid]<target//right side search kara
                st=mid+1;
                ans=mid+1;
            }
        }
        return ans;
    }
};