class Solution {
public:
    int binarySearch(vector<int>& arr, int tar,int st,int end){//helper function
        if(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==tar){
                return mid;
            }
            if(arr[mid]<=tar){//second half search
                return binarySearch(arr,tar,mid+1,end);
            }else{
                return binarySearch(arr,tar,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        /*int st=0;int end=nums.size()-1;
        while(st<=end){
            int mid= st + (end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                end=mid-1;
            }else if(nums[mid]<target){
                st= mid+1;
            }
        }
        return -1;*/
        int st=0;int end=nums.size()-1;
        return binarySearch(nums,target,st,end);

    }
};