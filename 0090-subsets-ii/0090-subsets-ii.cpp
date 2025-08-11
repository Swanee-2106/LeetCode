class Solution {
public:
    void onlyuniquesets(vector<int>& nums,vector<int>& ans, int i,vector<vector<int>>& allsubs){
        if(i==nums.size()){
            allsubs.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        onlyuniquesets(nums,ans,i+1,allsubs);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        onlyuniquesets(nums,ans,idx,allsubs);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans; 
        int i=0;
        vector<vector<int>> allsubs;
        onlyuniquesets(nums,ans,i,allsubs);
        return allsubs;
    }
};