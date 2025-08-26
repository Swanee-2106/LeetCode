class Solution {
public:
    void merge(vector<int>& nums,int st,int mid,int end){
        vector<int> temp;
        int i=st,j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }

        for(int idx=0;idx<temp.size();idx++){
            nums[idx+st]=temp[idx];
        }
    }
    void mergesort(vector<int>& nums, int st, int end){
        if(st<end){
            int mid= st+(end-st)/2;
            //leftside
            mergesort(nums,st,mid);
            //rightside 
            mergesort(nums,mid+1,end);

            merge(nums,st,mid,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        mergesort(nums,st,end);
        return nums;
    }
};