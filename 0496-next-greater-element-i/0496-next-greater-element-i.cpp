class Solution {
public:
    int next(vector<int>& arr, int val){
        stack<int> s;
        int ans = -1;  // default -1
        for(int i=arr.size()-1;i>=0;i--){
            // pop all smaller/equal elements
            while(!s.empty() && arr[i] >= s.top()){
                s.pop();
            }

            // agar yeh wahi element hai jiska next greater chahiye
            if(arr[i] == val){
                if(!s.empty()){
                    ans = s.top();
                }
                break; // mil gaya toh aur loop chalane ki need nahi
            }

            // hamesha current ko push karo (future ke liye)
            s.push(arr[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /*vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(next(nums2, nums1[i]));
        }
        return ans; */

        unordered_map<int,int> m;
        stack<int> s;
        for(int i=nums2.size()-1;i>=0;i--){
            while(s.size()>0 && nums2[i]>s.top()){
                s.pop();
            }
            if(s.size()==0){
                m[nums2[i]] = -1;
            }else{
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }  
        vector<int> ans;
        for(int val:nums1){
            ans.push_back(m[val]);
        }
        return ans;
    }
};