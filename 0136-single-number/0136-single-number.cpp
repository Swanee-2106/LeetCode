class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i = 0;i<nums.size();i++){
            bool isUnique = true;
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[j]==nums[i]){
                    isUnique=false;
                    break;
                }
            }
            if(isUnique==true){
                ans = nums[i];
            }
        }
    return ans;
    }
};