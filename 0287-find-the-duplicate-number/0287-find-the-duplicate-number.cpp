class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size()-1;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]) != s.end()){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return 0;
    }
};