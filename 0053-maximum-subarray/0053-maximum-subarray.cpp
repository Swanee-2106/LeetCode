class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MaxSum = INT_MIN;
        int CurrSum = 0;
        for(int i=0;i<nums.size();i++){
            CurrSum += nums[i];
            MaxSum = max(CurrSum, MaxSum);
            if(CurrSum<0){
                CurrSum = 0;
            }
        }
        return MaxSum; 
    }
};