class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*int n = nums.size();
        int sum = (n*(n+1))/2;
        for(int val: nums){
            sum = sum-val;
        }
        return sum;*/
        int n = nums.size();
        int xorVal=0;
        for(int i=0;i<=n;i++){
            xorVal^=i;
        }
        for(int num:nums){
            xorVal ^= num;
        }
        return xorVal;
    }
};