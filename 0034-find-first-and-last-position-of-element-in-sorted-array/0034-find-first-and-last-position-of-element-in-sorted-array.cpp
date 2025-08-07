class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1=-1;int idx2=-1;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && idx1==-1){
                idx1=i;
            }
            if(nums[i]==target){
                idx2=i;
            }
        }
        vec.push_back(idx1);
        vec.push_back(idx2);
        return vec;
    }
};