class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //Search for correct row which holds the target
        int m =matrix.size();
        int n =matrix[0].size();
        int st = 0,end=m-1;
        while(st<=end){
            int midrow=st+(end-st)/2;
            if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1]){
                //found the row now apply bs on this row
                int stcol=0,endcol=n-1;
                while(stcol<=endcol){
                    int midcol= stcol + (endcol-stcol)/2;
                    if(target==matrix[midrow][midcol]){
                        return true;
                    }
                    if(target>matrix[midrow][midcol] ){
                        stcol=midcol+1;
                    }else{
                        endcol=midcol-1;
                    }
                }
                return false;
            }else if(target>matrix[midrow][n-1]){
                //down=>right
                st=midrow+1;
            }else{
                //up=> left
                end=midrow-1;
            }
        }
        return false;
        /*for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]== target){
                    return true;
                }
            }
        }
        return false;*/

    }
};