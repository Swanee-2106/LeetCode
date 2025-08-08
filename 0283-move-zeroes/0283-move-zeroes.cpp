class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*int count=0;
        for(int i=0;i<nums.size();i++){//O(n)
            if(nums[i]==0){
                count++;
            }
        }
        for(int j=0;j<count;j++){//O(n2)
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==0){
                    swap(nums[i],nums[i+1]);
                }
            }
        }*/
        int index=0;
        for(int i=0;i<nums.size();i++){//O(n) TC And O(1) SC
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
        }
        while(index<nums.size()){
            nums[index] =0;
            index++;
        }
    }
};