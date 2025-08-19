class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*int n= nums.size()-1;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]) != s.end()){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return 0;*/

    // slow fast pointer approach
        int slow=0,fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow != fast);

        slow=0;

        while(slow != fast){
            slow = nums[slow];
            fast= nums[fast];
        }

        return slow;
    }
};