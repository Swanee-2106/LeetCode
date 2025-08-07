class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //finding the pivot
        int pivot=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){//if pivot does not exist inplace reverse
            reverse(nums.begin(),nums.end());
            return;
        }
        //2nd is reversing the pivot element with the right most elem
        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        //3rd Reverse the remaining array after pivot i.e. pivot+1 to n-1 to form the smallest element
        //reverse(nums.begin()+pivot+1,nums.end());
        int i=pivot+1,j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
};