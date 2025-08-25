class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n= mat[0].size();
        for(int d=0;d<m+n-1;d++){
            if(d%2==0){
                for (int i = min(d, m - 1); i >= max(0, d - n + 1); i--) {
                    ans.push_back(mat[i][d - i]);
                }
            }else{
                for (int i = max(0, d - n + 1); i <= min(d, m - 1); i++) {
                    ans.push_back(mat[i][d - i]);
                }
            }
        }
        return ans;  
        /*class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n= mat[0].size();
        for(int d=0;d<m+n-1;d++){
            if(d%2==0){
                for(int i=m-1;i>=0;i--){
                    for(int j=0;j<n;j++){
                        if(i+j==d){
                            ans.push_back(mat[i][j]);
                        }
                    }
                }
            }else{
                for(int i=0;i<m;i++){
                    for(int j=n-1;j>=0;j--){
                        if(i+j==d){
                            ans.push_back(mat[i][j]);
                        }
                    }
                }
            }
        }
        return ans;
    }
};*/ 
    }
};