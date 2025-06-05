class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        for(int val: nums){
            sum = sum-val;
        }
        return sum;
    }
};