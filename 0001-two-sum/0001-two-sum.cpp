class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    /*vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j= i+1; j<nums.size();j++){
            if (nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            } 
        }
    }
    return ans;*/
    unordered_map<int, int> m;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int first = nums[i];
        int second=target-first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
    }
};