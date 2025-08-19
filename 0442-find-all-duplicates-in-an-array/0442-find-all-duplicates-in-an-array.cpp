class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        /*unordered_set<int> s;// sc= O(n)
        for(int i=0;i<nums.size();i++){// TC =O(n)
            if(s.find(nums[i]) != s.end()){
                ans.push_back(nums[i]);
            }
            s.insert(nums[i]);
        }
        return ans;*/
        
        //We will use indesx marking technique
        for(int i=0;i<nums.size();i++){
            int idx= abs(nums[i])-1;

            if(nums[idx]<0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[idx] = -nums[idx];
            }
        }
        return ans;
    }
};