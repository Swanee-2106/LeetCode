class Solution {
public:
    int mySqrt(int x) {
        long int st=0;long int end=x;long int ans=0;
        while(st<=end){
            long int mid=st+(end-st)/2;
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid>x){//left search
                end=mid-1;
            }else if(mid*mid<x){//right search
                ans=mid;
                st=mid+1;
            }
        }
        return ans;
    }
};