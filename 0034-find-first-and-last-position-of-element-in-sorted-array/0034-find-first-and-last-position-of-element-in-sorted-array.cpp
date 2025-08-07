class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec(2,-1);
        int st=0,end=nums.size()-1;
        while(st<=end){//for first occurrence
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                vec[0]=mid;
                end=mid-1;//iske pehle koi hai ya nahin ye check karo left side mein
            }else if(nums[mid]>target){//left search
                end=mid-1;
            }else{//right search
                st=mid+1;
            }
        }
        st=0,end=nums.size()-1;
        while(st<=end){//for last occurrence
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                vec[1]=mid;
                st=mid+1;//iske baad koi hai ya nahin ye check karo right side mein
            }else if(nums[mid]>target){//left search
                end=mid-1;
            }else{//right search
                st=mid+1;
            }
        }
        return vec;
    }
};