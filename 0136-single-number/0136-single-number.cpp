class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Bitwise operator xor n^n=0 0^n=n
        int ans=0;
        for(int val:nums){
            ans = ans^val;
        }
        return ans;
    }
};