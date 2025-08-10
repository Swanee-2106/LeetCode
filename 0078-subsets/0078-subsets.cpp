class Solution {
public:
    void allSubsets(vector<int>& nums, vector<int>& ans, int i,vector<vector<int>> &allsubs){
        if(i== nums.size()){
            //store subsets in a vector in for of vectors
            allsubs.push_back(ans);
            return;
        }
        //include the nums[i] value in ans
        ans.push_back(nums[i]);
        allSubsets(nums,ans,i+1,allsubs);
        //backtrack to the previous
        ans.pop_back();
        //exclude the nums[i] value and print the ans
        allSubsets(nums,ans,i+1,allsubs);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubs;
        vector<int> ans;
        allSubsets(nums,ans,0,allsubs);
        return allsubs;
    }
};