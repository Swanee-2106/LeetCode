class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& v) {
        int area=0;
        int maxdiag=0;
        for(int i=0;i<v.size();i++){
            int diag=(v[i][0]*v[i][0]) + (v[i][1]*v[i][1]);
            int currarea=v[i][0]*v[i][1];
            if(diag>maxdiag){
                area= currarea; 
            }else if(diag==maxdiag){
                area=max(area,currarea);
            }
            maxdiag=max(maxdiag,diag);
        }
        return area;
    }
};