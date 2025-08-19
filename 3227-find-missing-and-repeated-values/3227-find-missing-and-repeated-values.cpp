class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int expSum=0;
        int actualSum=0;
        unordered_set<int> s;
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                actualSum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    int a= grid[i][j];
                    ans.push_back(a); 
                }
                s.insert(grid[i][j]);
            }
        }
        expSum= (n*n)*(n*n +1)/2;
        int b=expSum + ans[0] - actualSum;
        ans.push_back(b);
        return ans;
    }
};