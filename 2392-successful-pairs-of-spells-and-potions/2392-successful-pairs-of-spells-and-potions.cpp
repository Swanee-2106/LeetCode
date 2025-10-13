class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m = potions.size();
        vector<int> pairs(n);
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long spell = spells[i];
            int low = 0;
            int high = m-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                long long pot = potions[mid];
                if(spell*pot>=success){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            if(low==-1 || low==m){
                pairs[i]=0;
            }else{
                pairs[i] = m-low;
            }
        }
        return pairs;
    }
};