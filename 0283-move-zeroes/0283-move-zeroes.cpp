class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int j=0;j<count;j++){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==0){
                    swap(nums[i],nums[i+1]);
                }
            }
        }
    }
};