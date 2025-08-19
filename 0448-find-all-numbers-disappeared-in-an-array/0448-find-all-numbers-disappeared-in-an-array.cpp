class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        /*unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;*/
        for(int i=0;i<n;i++){
            int idx= abs(nums[i]) -1;
            if(nums[idx]>0){
                nums[idx] = -nums[idx];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};