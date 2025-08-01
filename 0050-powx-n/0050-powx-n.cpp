class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long binaryn = n;
        if(x==0) return 0;
        if(n==0) return 1;
        if(x==1) return 1;
        if(x==-1 && n%2==0) return 1;
        if(x==-1 && n%2!=0) return -1;
        if(n<0){
            x=1/x;
            binaryn=-binaryn;
        }
        while(binaryn>0){
            if(binaryn%2==1){
                ans=ans*x;
            }
            x=x*x;
            binaryn = binaryn/2;
        }
        return ans;
    }
};