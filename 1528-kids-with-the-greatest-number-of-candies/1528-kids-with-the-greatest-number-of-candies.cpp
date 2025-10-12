class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy = INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max_candy){
                max_candy=candies[i];
            }
        }
        vector<bool> out;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max_candy){
                out.push_back(true);
            }else{
                out.push_back(false);
            }
        }
        return out;
    }
};